#include "window.h"

bool core::Window::Init() {

    //initialize glfw and give context for our window properties
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    //raw ptr to a glfw window object
    auto* glfwWinPtr = glfwCreateWindow(1920, 1080, "Voxel-Tech", NULL, NULL);

    std::cout << "works up to here 1 \n";

    //test case to see if window is successfully constructed
    if(!glfwWinPtr){
        glfwTerminate();
        return false;
    }

    //set the context of the main thread to newly created glfw window object
    //means future glfw calls are referred to this window without specifying the "ptr" to the window
    glfwMakeContextCurrent(glfwWinPtr);

    //initialize glad
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        return false;
    }


    windowPtr.reset(glfwWinPtr);

    //glViewport(0, 0, 1920, 1080);

    return true;
}
