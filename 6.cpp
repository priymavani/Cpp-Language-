// 6. Write a function that checks if a username and password match predefined values. If the username is "admin" and the password is "1234", print "Login successful"; otherwise, print "Login failed."

// approch 1
#include<iostream>
#include<string>
using namespace std;

string password(string a , string b){

    if(a == "admin"&& b == "1234"){
        cout<< "Login successful" << endl ;
    }else{
        cout << "Login failed" << endl;
    }
}

int main(){
     password("admin", "1277");
}