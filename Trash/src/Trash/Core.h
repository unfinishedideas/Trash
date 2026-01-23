#pragma once

// Determine whether or not we are DLL Importing/Exporting for Windows
#ifdef TS_PLATFORM_WINDOWS
	#ifdef TS_BUILD_DLL
		#define TRASH_API __declspec(dllexport)
	#else
		#define TRASH_API __declspec(dllimport)
	#endif
#else
	#error Trash Engine only supports Windows! [for now :)]
#endif
