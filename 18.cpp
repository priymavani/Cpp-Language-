// 18. Print all elements that are at even indexes in the array arr = [10, 20, 30, 40, 50]. Output:[10,30,50]

// approch 1

#include <iostream>
using namespace std;

int printnumber(int a[] , int size){

    for(int i =0 ; i< size ; i+=2){
        cout << a[i] << endl ;
    }
}
int main(){
            int a[] = {10, 20, 30, 40, 50};
            int size = sizeof(a)/sizeof(a[0]); 

            printnumber(a , size) ; 
    
}
