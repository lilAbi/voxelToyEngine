#include <core/application.h>
#include <memory>

int main() {
    //ptr to an application object, aka our game
    std::unique_ptr<core::Application> applicationPtr = std::make_unique<core::Application>();

    if(applicationPtr->Init()){
        applicationPtr->Run();
    }

    //clean up application
    applicationPtr->CleanUp();

    return 0;
}

