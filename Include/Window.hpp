





#include <GLFW/glfw3.h>


namespace CompositeEngineCore
{
	class Window
	{
	private:
		GLFWwindow* window;
	public:
		bool CreateNew(unsigned int w_width=800, unsigned int w_height=600, const char *w_title="New Composite Engine Window");
		void DestroyWindow(GLFWwindow* targetWindow);
	};
}