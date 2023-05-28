#ifndef TOYGAMEENGINE_APPLICATION_H
#define TOYGAMEENGINE_APPLICATION_H

#include <iostream>
#include <memory>

#include <core/window.h>
#include <graphics/renderer.h>

/*
 * Container and manager for sub systems that make up the game.
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

    private:
        //current state of the game
        core::Window window;
        gfx::Renderer renderer;
    };

}

#endif //TOYGAMEENGINE_APPLICATION_H
