// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

//approch 1
#include<iostream>
using namespace std;
#include<string>
void uppercase(string str){
    int size = str.size();
    for(int i=0;i<size;i++){
        str[i] = str[i] - 32;
    }
    cout << str;
}
int main(){
    uppercase("string");
}