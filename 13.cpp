// 13. Check if the array arr = [1, 2, 3, 4, 5] contains the number 3 and print true or false.

// approch 1

#include<iostream>
#include<string>
using namespace std;

bool chechValue(int a[] , int size, int check){

    bool isValue = false;

    for(int i =0 ; i<size ; i++){
        if(a[i] == check){
            isValue = true ;
            break;
        }
    }

    if(isValue){
        cout << "true "<<endl ;
    }else{
        cout<< "false" << endl;
    }
}

int main (){

    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a)/sizeof(a[0]);

    chechValue(a ,size , 3);

    return 0;
}



