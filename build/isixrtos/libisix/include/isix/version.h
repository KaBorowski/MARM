#pragma once


#ifdef __cplusplus
namespace isix {
	static inline const char* get_version(void) {
		return "ver3.0-109-g9b1962e0";
	}

}
#else
	static inline const char* isix_get_version(void) {
		return "ver3.0-109-g9b1962e0";
	}
#endif
