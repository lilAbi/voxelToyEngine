#ifndef TOYGAMEENGINE_CHUNK_H
#define TOYGAMEENGINE_CHUNK_H

#include <array>
#include <algorithm>
#include "blockID.h"

const int CHUNK_X = 8;
const int CHUNK_Y = 8;
const int CHUNK_Z = 8;



namespace game {

    class Chunk {
    public:
        explicit Chunk(BlockID blockToFill = BlockID::Air);

        ~Chunk() = default;

    private:
        std::array<BlockID, CHUNK_X*CHUNK_Y*CHUNK_Z> blocks{};
    };

}


#endif //TOYGAMEENGINE_CHUNK_H
