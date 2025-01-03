// 25. Write a program to split a string into an array of words. Example: Input: inputString = "Hello world, welcome to JavaScript!";Output:'Hello', 'world', 'welcome', 'to', 'JavaScript'

//approch 1
#include <iostream>
#include <cstring> // For working with C-style strings
using namespace std;

void extractWord(string str){
    int start = 0;
    int length = str.length();

    for(int i =0 ; i< length ; i++){
        if(str[i] == ' '|| ispunct(str[i])){

            if(start < i ){
                cout <<"'" << str.substr(start , i -start) << "' ,"  ;
            }
            start = i +1 ;
        }
    }

    if(start < length){
        cout << str.substr(start) << endl ;
    }
}

int main(){

    string str = "Hello, My ";
    extractWord(str);
}

// approch 2

