// 16. Check if all the elements in arr = [3, 5, 9, 1, 7] are positive numbers, and print true or false.

// // approch 1 
// #include <iostream>
// using namespace std;
// #include<string>

// string check(int a[] , int size){

    
//     int positive = 0;
//     int i =0 ;
//     for(i = 0 ; i< size ; i++){
//         if(a[i]>= 0){
//            positive ++ ;
//         }
//         else{
//             break ;
//         }
//     }

//     if(positive == size){
//         cout<< "true" << endl;
//     }else{
//         cout<< "false" << endl;
//     }

// }

// int main(){
//     int a[] = {3,5,9,1,7};
//     int size = sizeof(a)/sizeof(a[0]);

//     check(a,size);
//     return 0;

// }



// approch 2
#include <iostream>
using namespace std;

bool check (int a[] , int size){

    int i=0;
    for(i = 0 ; i< size ; i++){
        if(a[i] <= 0){
            return false ;

        }
    }

    return true ;
}
int main(){
    int a[] = {3,5,9,1,7};
    int size = sizeof(a)/sizeof(a[0]);

    
     
    if(check(a,size)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
    return 0;

}