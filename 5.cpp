// 5. Write a function that checks if a person is eligible to vote. The person is eligible if they are 18 years old or older.


// approch 1
#include<iostream>
#include<string>
using namespace std;

string eligible(int a){
    if(a>= 18){
        cout << "You are eligible to vote" << endl;

    }
    else if(a < 0){
        cout << "not valid" << endl ;
    }else{
         cout << "you are not eligible to vote" << endl ;
    }
}

int main(){

    eligible(18);
}