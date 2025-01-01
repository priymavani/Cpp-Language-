// 26. Write a program to check if a string ends with a specific character.Example: Input: ("codinggita", "a"), Output: true. 


// // approch 1 
// #include <iostream>
// #include <string>
// using namespace std;

// bool checkLastLetter(string str,char a ){
//     int length = str.length();
    
//         if(length == 0 ){
//             cout << "false" << endl ;
//             return false ;
//         }

//         if(str[length - 1] == a){
//             cout << "true" << endl ;
//             return true ;
//         }
    
//     cout << "false" << endl ;
//     return false ;
// }


// int main(){
//     string str = "codinggita";
//     checkLastLetter(str , 'a');
// }


// approch 2  
#include <iostream>
#include <string>
using namespace std;

bool chechLastLetter(string str, char ch){
    return !str.empty() && str.back() == ch ;
}

int main(){

    string str = "codinggita" ;
    char ch  = 'a' ;

     if (chechLastLetter(str , ch )) {
        cout << "Output: true" << endl; 
    } else {
        cout << "Output: false" << endl;  
    }

}
