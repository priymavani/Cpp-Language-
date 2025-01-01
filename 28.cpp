// 28. Write a function that takes two numbers and prints the largest one.Example:Input:number1 = 10;, Number2= 20; Output:20;


// // appoch 1
// // by ternary operater

// #include <iostream>
// using namespace std;

// void largest(int a , int b ){

//     (a > b) ? cout << "lagest is" << a << endl  : cout << "lagest is " << b << endl ; 
// }

// int main(){

//     int a = 10 ;
//     int b = 20 ;
//     largest(a ,b) ;
//     return 0 ;
// }

// // appoch 2
// // by if else

// #include <iostream>
// using namespace std;

// void largest(int a , int b ){

//     if(a> b){
//         cout << "largest is " << a << endl ;
//     }else{
//         cout << "largest is " << b << endl ;
//     }
   
// }

// int main(){

//     int a = 10 ;
//     int b = 20 ;
//     largest(a ,b) ;
//     return 0 ;
// }


// appoch 3
// by max function

#include <iostream>
using namespace std;

void largest(int a , int b ){

  cout << "lagest is " <<  max(a,b) << endl ;
   
}

int main(){

    int a = 10 ;
    int b = 20 ;
    largest(a ,b) ;
    return 0 ;
}