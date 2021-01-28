#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/stat.h>
#include "string.h"
using namespace std;

//key code
string key_array[50]={
   
};


void key_for_hash(int cycles_of_generate){
	string word;
	cout<<"Enter key code:";
	cin>>word;
	for (int i=0;i<=cycles_of_generate;i++){
		word += char(rand() % 26 + 0x61); // random letter of alphabet
		if (word=="a"){
			word="aKE$$^^(";
		}
		if(word=="b"){
			word="bKES^^&(";
		}
		key_array[i]={word};// add in  key array

	}
	cout<<key_array<<endl;
}



