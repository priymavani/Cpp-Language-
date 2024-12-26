
// 1. Write a function to check the grade of a student based on the score:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F

// aprroch 1 
#include <iostream>
#include <string>
using namespace std ;

string grade(int a) {
    if(a >= 90 && a <= 100){
        return "A" ;
    }else if(a >= 80 && a <90 ){
        return "B";
    }else if(a >= 70 && a < 80){
        return "C";
    }else if(a >= 60 && a < 70){
        return "D";
    }else if(a >=0 && a <= 60  ){
        return "F";
    }else{
        return "Invalid Number";
    }

}
int main(){

    int a = 95 ;
    cout << grade(a) << endl ;
}