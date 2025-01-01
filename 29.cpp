// 29.Write a program to find all pairs in an array whose sum is equal to a given number.: Example 1: Input: nums = [2,7,11,15], target = 9 , Output: [0,1].


#include <iostream>
using namespace std;

void sumpair(int a[],int size , int value ){

    bool found = false ;
    for(int i =0 ; i<size ; i++){
        for(int j = i+1 ; j< size ; j++){
            if(a[i] + a[j] == value  )
            // here we can also write value a[i] == target - a[j]
            {
                cout << '[' << i << "," << j << "]" << endl ;
                found = true ;
            }
        }

    }

    if(!found){
        cout << "No Pair Available" << endl;
    }
}


int main(){

    int a[] = {1,2,3,5,4};
    int size = sizeof(a) / sizeof(a[0]);
    int value = 6 ;

    sumpair(a,size , value) ;
}

