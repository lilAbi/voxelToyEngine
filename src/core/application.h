#ifndef TOYGAMEENGINE_APPLICATION_H
#define TOYGAMEENGINE_APPLICATION_H

#include <core/window.h>
#include <graphics/renderer.h>
#include <iostream>

/*
 * the application class is responsible for managing the internal engines that
 * make up the game.
 */

namespace core {

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
        inline void PreUpdate();
        inline void Update();
        inline void PostUpdate();

    private:
        //current state of the game
        core::Window window;
        gfx::Renderer renderer;
        //gameEngine game;
        //
    };

}

#endif //TOYGAMEENGINE_APPLICATION_H
