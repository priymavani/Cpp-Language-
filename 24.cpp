// 24. Write a program to remove whitespace from both ends of a string. Example: Input: " hello ", Output: "hello".

#include<iostream>
using namespace std;
#include<string>
void whitespace(string str){
    for(int i=0;i<str.size();i++){
        if(str[i] != 32){
            cout << str[i];
        }
    }
}
int main(){
    whitespace(" Hello ");
}