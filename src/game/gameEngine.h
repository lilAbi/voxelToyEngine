#ifndef TOYGAMEENGINE_GAMEENGINE_H
#define TOYGAMEENGINE_GAMEENGINE_H

//this object will manage the game systems itself
namespace game {

    class GameEngine {
    public:
        GameEngine() = default;
        ~GameEngine() = default;

        void RunGameLoop();

    public:


    };
}


#endif //TOYGAMEENGINE_GAMEENGINE_H
