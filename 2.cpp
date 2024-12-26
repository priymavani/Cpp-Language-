// 2. Write a function to determine whether a given number is positive, negative, or zero.

// approch 1 
#include<iostream>
using namespace std;

#include<string>

string numberis(int a){
    if(a == 0){
        cout<< "Number zero" << endl ;
    }else if(a> 0){
        cout<< "Number is positive"<< endl;
    }else{
        cout << "Number is Negative"<<endl;
    }

}

int main(){
    
    numberis(8);
}