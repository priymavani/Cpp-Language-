// 35. Print an inverted right-angled triangle pattern with n rows.

// approch 1

#include <iostream>
using namespace std;

int main() {
    int n = 5 ;

    for (int i = 0; i < n; i++) {
     
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl; 
    }

    return 0;
}