// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

//approch 1
#include<iostream>
#include<string>
using namespace std;
void length(string str){
    int LengthoOfString = str.size();
    cout << "Length : " << LengthoOfString;
}
int main(){
    length("hello world");
}