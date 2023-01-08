





#include <GLFW/glfw3.h>


#define WINDOWS_REQUIRED "Windows"
#define WINDOWS_64_BIT_REQUIRED "Windows 64-bit"

#define LINUX_REQUIRED "Linux"

#define FREE_BSD_REQUIRED "FreeBSD"

#define ANDROID_REQUIRED "Android"

#define UNIX_REQUIRED "Unix"

#define OS_X_REQUIRED "Mac OS"


namespace CompositeEngineCore
{
	namespace AppController
	{
		class Libraries
		{
		public:
			static bool CheckGLFW();
		};

		class CheckPlatformSpecs
		{
			bool CheckOS(const char *requiredOS = NULL);
		};

		class Application
		{
		public:
			bool StartUP();
		};
	}
}