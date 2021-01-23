#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
using namespace  std;
void make_coin(int amount){
    if (amount >= 100){
        cout<<"Permison is not availiable "<<endl;
    }
}
int main() {

    cout << "Lunes\n\n\n" << std::endl;
    string code_for_coin;
    // create object to write down data in file
    ofstream file("coin.txt");
    if(file){
        cout<<"There is file "<<endl;
    }
    for (int i=0;i<=23;i++) {
        file << char(rand() % 26 + 0x61);
    }
}
