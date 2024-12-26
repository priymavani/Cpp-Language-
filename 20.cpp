// 20. Find and print the difference between the maximum and minimum elements in arr = [80, 30, 70, 50, 20]. 

// approch 1 

#include <iostream>
using namespace std;

int maxmindiff(int a[] , int size){
    int max  ;
    int min ;

    for(int i =0 ; i<size ; i++){
        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
  
    cout << "Difference : " <<max - min << endl ;

}

int main(){
    int a[] = {80, 30, 70, 50, 20};
    int size = sizeof(a)/sizeof(a[0]);

    maxmindiff(a,size);
}




