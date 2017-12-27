
#include <iostream>
#include <sstream>

using namespace std;

class Block {
public:
    string sHash;
    string sPrevHash;

    Block(int IndexIn, string Data);//function

    void MineBlock(int Difficulty);//funtion

private:
    int Index;//block number zero index is for gensis block
    int Nonce;//this is passed to sha256 as a substring in  
    string Data;
    time_t tTime;

    string CalculateHash() ;//function
};


