
#include "Block.h"
#include "sha256.h"

Block::Block(int IndexIn, string Data) 
{
    Nonce = 0;
    tTime = time(nullptr);//this is epoch time which is in seconds
    sHash = CalculateHash();
    cout<<Data<<endl;
}

void Block::MineBlock(int Difficulty)
{
    char diff_string[Difficulty + 1];
    for (int i = 0; i < Difficulty; ++i)
    {
        diff_string[i] = '0';
    }
    diff_string[Difficulty] = '\0';

    string str=diff_string;

    while (sHash.substr(0, Difficulty) != str)
    {
        Nonce++;
        sHash = CalculateHash();
    }

    cout << "Block mined: " << sHash << endl;
}

inline string Block::CalculateHash() 
{
    stringstream ss;
    ss << Index << sPrevHash << tTime << Data << Nonce;

    return sha256(ss.str());
}
