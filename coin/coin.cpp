#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
#include "keys.cpp"
#include "hash_system.h"

using namespace  std;
string array_text[] ={}; // array for code of coin
long int array_text_for_id[]={};
string crypto_log_key[]={}; // crypto key for coin


void make_coin(string file_name){
    
    int text_id_coin;
    string text_code;
    
        //fill array by text code
        for (int i = 0; i <= 50; i++) {
            text_code += char(rand() % 26 + 0x61);

            array_text[i]=text_code;
        }
        text_id_coin += rand()%123+1299999;
        array_text_for_id[1]=text_id_coin;
    
    ofstream file(file_name);
    file<<"@LUNAS---"<<array_text<<array_text_for_id<<"___";

}

int main() {

    cout << "Lunas\n\n\n" << std::endl;
    
    make_coin("coin.txt");
    
    return  0;
}