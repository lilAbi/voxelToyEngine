#include "application.h"

bool core::Application::Init() {

    std::cout << "Application Init \n";

    //set up window
    if(!window.Init()){
        std::cout << "Window did not init \n";
        return false;
    }

    //set up renderer

    return true;
}

void core::Application::Run() {

    while (!glfwWindowShouldClose(window.GetWindowPtr()))
    {
        // input
        // -----

        // render
        // ------

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
        // -------------------------------------------------------------------------------
        glfwSwapBuffers(window.GetWindowPtr());
        glfwPollEvents();
    }

}

void core::Application::CleanUp() {

}
