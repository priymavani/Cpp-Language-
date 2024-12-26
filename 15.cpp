// 15. Remove the Last element Input: nums = [1, 2, 3, 4,5]; Output: nums = [1,2,3,4].

// approch 1 
// #include <iostream>
// using namespace std;

// int removeLast(int a[] , int size ){
//     size -- ;
//     a[size] = '0';

//     int i =0 ;
//     for (i = 0; i< size ; i++){
//         cout<<a[i] << endl;

//     }
// }


// int main (){

//     int a[] = {1,2,3,4,5};
//     int size = sizeof(a)/sizeof(a[0]);

//     removeLast(a,size);
//     return 0 ;
// }

// approch 1
#include <iostream>
using namespace std;
#include<string>

string check(int a[] , int size){

    
    int positive = 0;
    int i =0 ;
    for(i = 0 ; i< size ; i++){
        if(a[i]>= 0){
           positive ++ ;
        }
        else{
            break ;
        }
    }

    if(positive == size){
        cout<< "true" << endl;
    }else{
        cout<< "false" << endl;
    }

}

int main(){
    int a[] = {3,5,9,1,7};
    int size = sizeof(a)/sizeof(a[0]);

    check(a,size);
    return 0;

}