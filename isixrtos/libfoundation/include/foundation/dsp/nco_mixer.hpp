/*
 * nco_mixer.hpp
 *
 *  Created on: 02-04-2013
 *      Author: lucck
 */

#pragma once

#include <cstdlib>
#include <cmath>
#include <cstddef>
#include <complex>
#include <limits>
#include "array_sinus.hpp"

namespace dsp {


	template <typename R, typename P, std::size_t SSIN_SIZE, P PI2 > class nco_mixer
	{
		private:
			template<typename T> static constexpr int cbits()
			{
				return __builtin_log2(std::numeric_limits<T>::max()) + 0.5;
			}
			static const int SHIFT = cbits<R>();
			void inc_phz( P phz_inc )
			{
				if( phz_inc == 0 ) return;
				const auto ddiv = std::div( phz_inc * max_angle(), PI2 );
				m_vco_phz_rem  += ddiv.rem;
				const auto fdiv = m_vco_phz_rem/PI2;
				m_vco_phz += ddiv.quot + fdiv;
				if( fdiv ) m_vco_phz_rem %= PI2;
				if( m_vco_phz > max_angle() )		//handle 2 Pi wrap around
					m_vco_phz -= max_angle();
			}
		public:
			constexpr R max_angle( )
			{
				return dsp::integer::trig::sin_arg_max<R, SSIN_SIZE>();
			}
			std::complex<R> mix_cos_r_sin_i( R signal, P phz_inc )
			{
				const std::complex<R> ret(
						(signal*icosinus(m_vco_phz)) >> SHIFT ,
						(signal*isinus(m_vco_phz))   >> SHIFT
						);
				inc_phz( phz_inc );
				return ret;
			}
			std::complex<R> mix_cos_r_sin_i( std::complex<R> signal, P phz_inc )
			{
				const std::complex<R> ret(
						(signal.real()*icosinus(m_vco_phz)) >> SHIFT ,
						(signal.imag()*isinus(m_vco_phz))   >> SHIFT
						);
				inc_phz( phz_inc );
				return ret;
			}
			R mix_cos( R signal, P phz_inc )
			{
				R ret = (signal*icosinus(m_vco_phz)) >> SHIFT;
				inc_phz( phz_inc );
				return ret;
			}
			R mix_sin( R signal, P phz_inc )
			{
				R ret = (signal*isinus(m_vco_phz))  >> SHIFT;
				inc_phz( phz_inc );
				return ret;
			}
		private:
			inline int isinus( P value )
			{
				return dsp::integer::trig::sin<R, SSIN_SIZE>( value );
			}
			inline int icosinus( P value )
			{
				return dsp::integer::trig::sin<R, SSIN_SIZE>( max_angle()/4 + value );
			}
		private:
			P m_vco_phz {};
			P m_vco_phz_rem {};
	};



}

