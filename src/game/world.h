#ifndef TOYGAMEENGINE_WORLD_H
#define TOYGAMEENGINE_WORLD_H

#include "chunk.h"
#include <vector>


const int WORLD_X = 8;
const int WORLD_Y = 8;
const int WORLD_Z = 8;

//container to manage loaded chunks in game

namespace game {
    class World {
    public:
        World();
        ~World() = default;

    private:
        std::vector<Chunk> chunks;
    };
}


#endif //TOYGAMEENGINE_WORLD_H
