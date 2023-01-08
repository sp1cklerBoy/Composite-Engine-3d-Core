





#include <AppController.hpp>
#include <Platform/GetPlatform.hpp>
#include <Platform/Platform.hpp>

#include <iostream>


bool CompositeEngineCore::AppController::Libraries::CheckGLFW()
{
	if (!glfwInit()) {
		std::cout << "Critical error!\n Cannot init required library - GLFW" << std::endl;
		return false;
	}
	return true;
}



bool CompositeEngineCore::AppController::CheckPlatformSpecs::CheckOS(const char* requiredOS)
{
	const char* currentOS = CompositeEngineCore::Platform::Specs::OS::getCurrentOS();

		if (WINDOWS_REQUIRED)
		{
			if (currentOS == "Windows")
				return true;
			return false;
		}

		else if (WINDOWS_64_BIT_REQUIRED)
		{
			if (currentOS == "Windows 64-bit")
				return true;
			return false;
		}

		else if (LINUX_REQUIRED)
		{
			if (currentOS == "Linux")
				return true;
			return false;
		}

		else if (FREE_BSD_REQUIRED)
		{
			if (currentOS == "FreeBSD")
				return true;
			return false;
		}

		else if (ANDROID_REQUIRED)
		{
			if (currentOS == "Android")
				return true;
			return false;
		}

		else if (UNIX_REQUIRED)
		{
			if (currentOS == "Unix")
				return true;
			return false;
		}

		else if (requiredOS == NULL)
			return NULL;
	}
