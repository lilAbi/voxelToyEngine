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

    return true;
}

void core::Application::Run() {

    while (!glfwWindowShouldClose(window.GetWindowPtr())) {

        PreUpdate();
        Update();
        PostUpdate();
    }

}

//clean up resources for a safe exit
void core::Application::CleanUp() {

}

void core::Application::PreUpdate() {

    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

}

void core::Application::Update() {

}

void core::Application::PostUpdate() {

    glfwSwapBuffers(window.GetWindowPtr());
    glfwPollEvents();
}
