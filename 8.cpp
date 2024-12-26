// 8. Find the Average of an Array. Example: Input: arr=[1,2,3,4,5]; Output: 3

// approch 1 
#include<iostream>
#include<string>
using namespace std;

int average (int a[],int size){
    int i =0 ;
    
    int sum = 0;

    for(i =0 ; i< size ; i++){
        sum = sum + a[i];
    }
    cout<< sum/size << endl;

}

int main(){

    int a[] ={1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);
    average(a,size);

    return 0;
}