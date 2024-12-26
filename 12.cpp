// 12. Add the number 6 to the end of the array arr = [1, 2, 3, 4, 5] and print the updated array. Output:[1,2,3,4,5,6]

// apporch 1 
#include<iostream>
#include<string>
using namespace std;


int addNumber(int a[] ,int size,int add){

    size ++ ;
    a[size-1] = add ;

    int i =0 ;
    for(i = 0; i< size ; i++){
        cout<< a[i] << endl ;
    }

}

int main(){

    int a[] ={ 1,2,3,4,5};
    int size = sizeof(a)/sizeof(a[0]);

    addNumber(a ,size , 6);

    return 0;
}



