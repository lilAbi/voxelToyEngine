#include <core/application.h>

int main() {
    //Create a game application object on the heap
    std::unique_ptr<core::Application> applicationPtr = std::make_unique<core::Application>();

    //initialize the application and its sub systems
    if(applicationPtr->Init()){
        applicationPtr->Run();
    }

    return 0;
}

