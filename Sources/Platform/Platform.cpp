





#include <Platform/Platform.hpp>


#include <GLFW/glfw3.h>

const char* CompositeEngineCore::Platform::Specs:: OS :: getCurrentOS()
{
#if defined(CURRENT_PLATFORM_IS_WINDOWS_32_BIT) && defined(CURRENT_PLATFORM_IS_WINDOWS_64_BIT)
	return "Windows";
#elif defined(CURRENT_PLATFORM_IS_WINDOWS_32_BIT) || !defined(CURRENT_PLATFORM_IS_WINDOWS_64_BIT)
	return "Windows 32-bit";
#elif defined(CURRENT_PLATFOM_IS_WINDOWS_64_bit) || !defined(CURRENT_PLATFORM_IS_WINDOWS_32_BIT)
	return "Windows 64-bit";
#elif defined(CURRENT_PLATFORM_IS_ANDROID)
	return "Android";
#elif defined(CURRENT_PLATFORM_IS_LINUX)
	return "Linux"
#elif defined(CURRENT_PLATFORM_IS_FREE_BSD)
	return "FreeBSD"
#elif defined(CURRENT_PLATFORM_IS_UNIX)
	return "Unix";
#elif defined(CURRENT_PLATFORM_IS_OS_X)
	return "MacOS";
#elif defined(UNKNOWN_PLATFORM)
	return "Unknown";
#endif  

}

auto CompositeEngineCore :: Platform :: Specs :: Video :: GetOpenGLVersion()
{
	return glGetString(GL_VERSION);
}