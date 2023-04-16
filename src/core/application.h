#ifndef TOYGAMEENGINE_APPLICATION_H
#define TOYGAMEENGINE_APPLICATION_H

#include <core/window.h>
#include <graphics/renderer.h>
#include <iostream>

namespace core {

    enum class ApplicationState{
        MAIN_MENU,      //represents the menu main to play or go into settings, and the default state of the application upon startup
        GAME,           //playing the actual game
        SETTING,        //edit settings
    };

    class Application {
    public:
        Application() = default;
        ~Application() = default;

        //initialize the sub-systems
        bool Init();

        //main application loop
        void Run();

        //clean up the application for a safe shut down
        void CleanUp();


    private:
        //current state of the game
        ApplicationState appState{ApplicationState::MAIN_MENU};
        core::Window window;
        gfx::Renderer renderer;
    };

}

#endif //TOYGAMEENGINE_APPLICATION_H
