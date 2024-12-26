
// 19. Check if the array arr = [1, 2, 3, 4, 5] is sorted in ascending order, and print true or false.

// approch 1 
#include <iostream>
using namespace std;

bool sortcheck(int a[] , int size ){
  

    for(int i =0 ; i <size ; i++){
        if(a[i] >= a[i+1]){
            return false ;
            break;
        }
    }
    return true;

    

}
int main() {

        int a[] = {1, 2, 3, 4, 5};
        int size = sizeof(a)/sizeof(a[0]); 

        if(sortcheck(a , size) ){
            cout << "true" << endl ;
        } else{
            cout << "false" << endl;
        }

        return 0;
}


