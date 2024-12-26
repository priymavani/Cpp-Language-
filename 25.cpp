// 25. Write a program to split a string into an array of words. Example: Input: inputString = "Hello world, welcome to JavaScript!";Output:'Hello', 'world', 'welcome', 'to', 'JavaScript'

//approch 1
#include<iostream>
#include<string>
using namespace std;
void split(string str){
    char arr[50] = {};
    for(int i=0;i<str.size();i++){
        arr[i] = str[i];
        cout << arr[i];
    }
}
int main(){
    split("hello");
}