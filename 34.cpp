// 34. Access and print the first and last element of the array arr = [10, 20, 30, 40, 50]. Output:[10,50]


// approch 1
#include<iostream>
using namespace std ;

void firstAndLast(int a[],int size){

  cout << "[" << a[0] << "," << a[size-1] << "]" ;
}

int main(){
    int a[] =  {10, 20, 30, 40, 50} ;
    int size = sizeof(a)/sizeof(a[0]);

    firstAndLast(a , size) ;
}