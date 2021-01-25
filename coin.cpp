#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
using namespace  std;
string array_text[] ={}; // array for code of coin
long int array_text_for_id[]={};
string crypto_log_key[]={}; // crypto key for coin
void make_coin(int amount ,string file_name){
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
    ofstream file(file_name);
    file<<"@LUNES---"<<array_text<<array_text_for_id<<"___";

}

int main() {

    cout << "Lunes\n\n\n" << std::endl;
    
    make_coin(1,"coin.txt");
    
    return  0;
}