#ifndef TOYGAMEENGINE_WINDOW_H
#define TOYGAMEENGINE_WINDOW_H
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>

#include <iostream>


namespace core {

    class Window {
    public:
        Window() = default;
        ~Window() = default;

        bool Init();

        GLFWwindow* GetWindowPtr() {return windowPtr.get();}

    private:
        //custom delete class function object for GLFW
        struct DestructGLFWPtr{
            void operator()(GLFWwindow* ptr){
                glfwDestroyWindow(ptr);
            }
        };

    private:
        std::unique_ptr<GLFWwindow, DestructGLFWPtr> windowPtr{};
    };
}


#endif //TOYGAMEENGINE_WINDOW_H
