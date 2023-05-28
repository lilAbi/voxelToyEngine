#include "world.h"

game::World::World() {
    chunks.reserve(WORLD_X*WORLD_Y*WORLD_Z);
}
