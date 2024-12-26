// 17. Count how many positive and negative numbers are in arr = [1, -2, 3, -4, 5, -6] and print the result. 

// // approch 1
// #include <iostream>
// using namespace std;

// int checknumber(int a[] , int size){

//     int positive = 0;
//     int negative = 0 ;

//     for(int i = 0 ; i < size ; i++){
//         if(a[i] > 0 ){
//             positive ++ ;
//         }else if(a[i] < 0){
//             negative ++ ;
            
//         }
//     }

//     cout <<" positive : "  << positive << endl ;
//     cout << "Negative : " << negative << endl ;


// }

// int main(){

//         int a[] = {1, -2, 3, -4, 5, -6};
//         int size = sizeof(a)/sizeof(a[0]); 

//         checknumber(a , size) ; 

// }


// approch 2
#include <iostream>
using namespace std;

int checknumber(int a[] , int size){

    int positive = 0;
    int negative = 0 ;

    for(int i = 0 ; i < size ; i++){
        if(a[i] > 0 ){
            positive ++ ;
        }else if(a[i] < 0){
            negative ++ ;
            
        }
    }

    cout <<" positive : "  << positive << endl ;
    cout << "Negative : " << negative << endl ;


}

int main(){

        int a[] = {1, -2, 3, -4, 5, -6};
        int size = sizeof(a)/sizeof(a[0]); 

        checknumber(a , size) ; 

}
