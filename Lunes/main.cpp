#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
using namespace  std;
string array_text[] ={}; // array for code of coin

void make_coin(int amount){
    int loops = amount; // cycles of making
    string text_code;
    while(loops!=0) {
        loops--;

        if (amount >= 100) {
            cout << "Permison is not availiable " << endl;
        }
        for (int i = 0; i <= 23; i++) {
            text_code += char(rand() % 26 + 0x61);
            array_text[i]=text_code;
        }
    }

}
int main() {

    cout << "Lunes\n\n\n" << std::endl;
    string code_for_coin;
    ofstream file("coin.txt");
    // create object to write down data in file
    if(file){
        cout<<"There is file "<<endl;
    }
    make_coin(1);
    file<<""<<array_text;
    return  0;
}
