#include "Blockchain.h"

int main()
{
    Blockchain bChain = Blockchain();

    cout << "Mining block 1..." << endl<<endl;
    bChain.AddBlock(Block(1, "transaction 1 details"));
   
   cout<<endl<<endl;

    cout << "Mining block 2..." << endl<<endl;
    bChain.AddBlock(Block(2, "transaction 2 details"));
   
  cout<<endl<<endl;

    cout << "Mining block 3..." << endl<<endl;
    bChain.AddBlock(Block(3, "transaction 3 details"));
    
    cout<<endl<<endl;
  

    return 0;
}
