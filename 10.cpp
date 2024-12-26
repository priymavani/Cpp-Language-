// 10. Given an array of integers, count how many numbers are even and how many are odd.
// Example:
// Input: [1, 2, 3, 4, 5]
// Output: Even: 2, Odd: 3

// approch 1 
#include<iostream>
#include<string>
using namespace std;

int checkOddEven(int a[] , int size ){
    int odd =0;
    int even = 0;

    for(int i =0 ; i< size ; i++){
        if(a[i] % 2 == 0){
            even ++ ;
        }else{
            odd ++;
        }
    }

    cout<< "Odd : " << odd << endl;
    cout<<"Even : " << even << endl;

}


int main(){

    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);

    checkOddEven(a ,size);
}

