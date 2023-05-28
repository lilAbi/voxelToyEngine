#ifndef TOYGAMEENGINE_WORLDBUILDER_H
#define TOYGAMEENGINE_WORLDBUILDER_H

#include "chunk.h"
#include "world.h"


/*
 * the purpose of this object will build a world object filled with chunks
 */

namespace game {

    struct WorldBuilder {

        bool buildWorldBasedOnHeightMap(World& world);

    };

}


#endif //TOYGAMEENGINE_WORLDBUILDER_H
