


#include <vector>
#include "Block.h"

using namespace std;

class Blockchain {
public:
    Blockchain();
    void AddBlock(Block bNew);

private:
    int Difficulty;
    vector<Block> vChain;//this is our blockchain

    Block GetLastBlock();// to make return value constant we used const here
};

