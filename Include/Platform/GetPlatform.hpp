





#ifdef _WIN32 && \
	!defined(_WIN64)
		#define CURRENT_PLATFORM_IS_WINDOWS_32_BIT
#elif _WIN64
#define CURRENT_PLATFORM_IS_WINDOWS_64_BIT
#elif __APPLE__ || __MACH__
#define CURRENT_PLATFORM_IS_OS_X
#elif __ANDROID__
#define CURRENT_PLATFORM_IS_ANDROID
#elif __linux__
#define CURRENT_PLATFORM_IS_LINUX
#elif __FreeBSD__
#define CURRENT_PLATFORM_IS_FREE_BSD
#elif __unix || __unix__
#define CURRENT_PLATFORM_IS_UNIX
#else
#define UNKNOWN_PLATFORM
#endif

