#include <core/application.h>
#include <memory>

int main() {

    std::cout << "enter main \n";

    //ptr to an application object, aka our game
    std::unique_ptr<core::Application> applicationPtr = std::make_unique<core::Application>();


    std::cout << "Application Init \n";

    if(applicationPtr->Init()){
        applicationPtr->Run();
    }

    //clean up application
    applicationPtr->CleanUp();

    return 0;
}

