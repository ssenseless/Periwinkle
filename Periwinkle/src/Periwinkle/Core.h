#pragma once

#ifdef PW_PLATFORM_WINDOWS
	#ifdef PW_BUILD_DLL
		#define PERIWINKLE_API __declspec(dllexport)
	#else 
		#define PERIWINKLE_API __declspec(dllimport)
	#endif
#else
	#error periwinkle only supports Windows!
#endif
