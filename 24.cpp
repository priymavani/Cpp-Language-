// 24. Write a program to remove whitespace from both ends of a string. Example: Input: " hello ", Output: "hello".

// #include<iostream>
// using namespace std;
// #include<string>
// void whitespace(string str){
//     for(int i=0;i<str.size();i++){
//         if(str[i] != 32){
//             cout << str[i];
//         }
//     }
// }
// int main(){
//     whitespace(" Hello ");
// }


// // approch 2
// #include <iostream>
// #include <cctype> // For isspace()
// using namespace std;

// string removeEndspace(string str){

//     int start = 0 ;
//     int end = str.length() - 1;

//     while( start >= end && isspace(str[start])){
//         start ++ ;
//     }

//     while(end >= start && isspace(str[end])){
//         end -- ;
//     }

//     return str.substr(start , end -start +1);

// }

// int main(){

//     string str = "  priy mavani  ";
//     cout << removeEndspace(str) ;
// }

// approch 2
#include <iostream>
#include<string>
#include <cctype> // For isspace()
#include<algorithm>
using namespace std;

string trimString(string str ){

    str.erase(str.begin(), find_if(str.begin(), str.end() , [](unsigned char ch){ return !isspace(ch) ;}));

    str.erase( find_if(str.rbegin(), str.rend() , [](unsigned char ch){ return !isspace(ch) ;}).base() ,str.end());

    return str;

}

int main(){
    string str = "  priy  ";
    cout << trimString(str) ;
}

