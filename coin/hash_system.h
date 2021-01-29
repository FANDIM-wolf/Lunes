// file of rand_string function
// function return random value of hash code
#include<iostream>
#include"string.h";
using namespace std;
//return random element of string array
string rand_string(string array[]){ 
    int length_of_array = sizeof(array) - 1;
    string string_value_of_array =to_string(rand()%length_of_array);
    cout<<string_value_of_array;
	return string_value_of_array;
}


int rand_int(int array_int[]){
	// rand_value for array
	int rand_value=NULL;
	int rand_int=NULL;
	int length_of_array_int = sizeof(array_int)/2;
	for (int j=0; j<=length_of_array_int; j++){
		//specific way 
           rand_value=array_int[j];
           rand_int=rand()%length_of_array_int;
           if(rand_value == rand_int){
           	 rand_value = rand_int;   
           }
	}
	return rand_value ;		
}

//it returns for length of array
int length_of_array(int array_int_l[]){
   int length_of_array_int_l = sizeof(array_int_l)/2;
   return length_of_array_int_l;
}
