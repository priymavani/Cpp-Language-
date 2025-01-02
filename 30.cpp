
// 30. Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately. Example : Input: n = 132456, Output: 12, 9


#include<iostream>
using namespace std ;
int oddeven(int n){
    int even = 0;
    int odd =0;

    while(n!= 0){
        int temp = n%10 ;
        n = n /10 ;

        if(temp %2 == 0){
            even += temp ;
        }else{
            odd += temp ;
        }
    }

    cout << even ;
    cout << "," << odd << endl;

}

int main(){

    oddeven(123456);
}


