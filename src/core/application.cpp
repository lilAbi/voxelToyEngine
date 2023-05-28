#include "application.h"

bool core::Application::Init() {

    //set up window
    if(!window.Init()){
        std::cout << "Window did not init\n";
        return false;
    }

    //set up renderer
    if(!renderer.Init()){
        std::cout << "Renderer did not init\n";
        return false;
    }


    //TODO: write code to setup a worldbuilder object and build a world$

    return true;
}

void core::Application::Run() {

    while (!glfwWindowShouldClose(window.GetWindowPtr())) {

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window.GetWindowPtr());
        glfwPollEvents();
    }

}