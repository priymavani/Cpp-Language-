// 4. Write a function to check whether a given character is a vowel or consonant.

// approch 1
#include <iostream>
#include <cctype>
#include<string>
using namespace std;

string isvowel(char a){
    char b = tolower(a);

    if(b == 'a' || b =='e' || b =='i' || b == 'o' || b == 'u' ){
        cout << "Vowel character" << endl ;

    }
    else{
        cout << "consonant Character" << endl;
    }
}

int main(){

    isvowel('P');
}