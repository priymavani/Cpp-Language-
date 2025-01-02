// 31. Write a program to repeat a string a specified number of times.Example: Input: ("hello", 3), Output: "hellohellohello".


// #include <iostream>
// #include<string>
// using namespace std ;

// string repeatstring(string str , int n){
//     string result ="";

//     for(int i =0 ; i<n ; i++){
//         result += str ;
//     }
//     cout << result << endl ;
// }

// int main(){
//     repeatstring("hello",3);
// }



// aprroch 2 
// in buil
#include <iostream>
#include<string>
#include<sstream>
using namespace std ;

string repeatstring(string str , int n){
    stringstream ss ;

    for(int i =0 ; i<n ; i++){
       ss << str ;
    }

    cout << ss.str() << endl ;
}

int main(){
    repeatstring("hello",3);
}