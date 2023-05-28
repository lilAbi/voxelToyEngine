#include "chunk.h"

game::Chunk::Chunk(BlockID blockToFill) {
    //fills the chunk with specified block value
    std::fill(blocks.begin(), blocks.end(), blockToFill);
}
