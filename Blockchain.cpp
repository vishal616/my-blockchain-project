

#include "Blockchain.h"

Blockchain::Blockchain()
{
    vChain.emplace_back(Block(0, "Genesis Block"));//emplace back add elements after the present last element vchain is vector here
    Difficulty = 4;
}

void Blockchain::AddBlock(Block bNew)
{
    bNew.sPrevHash = GetLastBlock().sHash;
    cout<<"Hash of Prev block is "<<bNew.sPrevHash<<endl;
    bNew.MineBlock(Difficulty);
    vChain.push_back(bNew);
}

Block Blockchain::GetLastBlock()
{
    return vChain.back();
}
