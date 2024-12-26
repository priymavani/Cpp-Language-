// 11. Remove duplicate elements from the array arr = [1, 2, 2, 3, 4, 4, 5] and print the updated array.

// approch 1 
#include<iostream>
#include<string>
using namespace std;


int removeDuplicate(int a[] ,int size ){
    int index =0 ;
    int out[index] ;

    int i =0;
    for(i = 0 ;i< size ; i++){
        bool isDublicate = false ;


            for(int j =0 ; j< index ; j++){
                if(a[i] == out[j]){
                    isDublicate = true ;
                    break;
                }
            }

            if(!isDublicate ){
                out[index++] =a[i];
            }
        
    }

    int j =0 ;
    for(j = 0; j<index ; j++){
        cout<< out[j] << endl ;
    }

}

int main(){

    int a[] = {1,2,2,3,4,4,5};
    int size =  sizeof(a)/sizeof(a[0]);

    removeDuplicate(a , size );
    return 0; 
}

