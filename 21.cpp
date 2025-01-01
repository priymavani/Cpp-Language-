// 21. Write a program to convert a given string to uppercase.Example: Input: "hello", Output: "HELLO".

// //approch 1
// #include<iostream>
// using namespace std;
// #include<string>
// void uppercase(string str){
//     int size = str.size();
//     for(int i=0;i<size;i++){
//         if(str[i] >= 'a' && str[i]<= 'z'){
//         str[i] = str[i] - 32;
//         }
//     }
//     cout << str;
// }
// int main(){
//     uppercase("string");
// }



// // approch 2
// #include<iostream>
// using namespace std;
// #include<string>
// #include<cctype>

// string toUpperCase(string str){
//     for(int i =0 ; i< str.length(); i++){
//         str[i] = toupper(str[i]);
//     }
//     return str;
// }

// int main(){

//     string str ="priy";

//     cout << toUpperCase(str) <<endl  ;
//     return 0 ;

// }

// approch 3
#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
#include<cctype>

string toUpperCase(string str){
    transform(str.begin(),str.end() , str.begin() , ::toupper);
    return str;
}

int main(){
    string str = "priy mavani";

    cout <<  toUpperCase(str) << endl ;
    return 0 ;
}