#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
using namespace  std;
string array_text[] ={}; // array for code of coin
long int array_text_for_id[]={};

void make_coin(int amount){
    int loops = amount; // cycles of making
    int text_id_coin;
    string text_code;
    while(loops!=0) {
        loops--;
        if (amount >= 100) {
            cout << "Permison is not availiable " << endl;
        }
        //fill array by text code
        for (int i = 0; i <= 50; i++) {
            text_code += char(rand() % 26 + 0x61);

            array_text[i]=text_code;
        }
        for (int i=24; i<=73; i++){
            text_code += char(rand()%26+0x61);
            array_text[i]=text_code;
        }
        text_id_coin += rand()%123+9999999;
        array_text_for_id[1]=text_id_coin;
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
    file<<"@LUNES---"<<array_text<<array_text_for_id;

    return  0;
}
