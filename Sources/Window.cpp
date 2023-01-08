





#include <Window.hpp>
#include <iostream>

bool CompositeEngineCore::Window::CreateNew(unsigned int w_width, unsigned int w_height, const char* w_title)
{
    window = glfwCreateWindow(w_width, w_height, w_title, NULL, NULL);
    
    if (!window)
    {
        glfwTerminate();
        std::cout << "ERROR :: Failed to create window!" << std::endl;
        return false;
    }

    glfwMakeContextCurrent(window);

    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();
    }
    return true;
}

void CompositeEngineCore::Window::DestroyWindow(GLFWwindow* targetWindow)
{
    glfwDestroyWindow(targetWindow);
}