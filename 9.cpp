// 9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

// approch 1

#include<iostream>
#include<string>
using namespace std;


int sort(int a[] ,int size){

    int i =0 , j =0 ;

    for(i =0 ; i< size ; i++){
        for(j = i +1 ; j< size ; j ++){
            if(a[i] > a[j]){
                int temp = a[j];
                a[j] = a[i] ;
                a[i] = temp ;
            }
        }
    }

    int k =0 ;
    for(k =0 ; k< size; k++){
        cout<< a[k] << endl ;
    }


}


int main() {

    int a[] = {4,2,8,5,1};
    int size = sizeof(a)/sizeof(a[0]);

    sort(a ,size);

    return 0;
}
