// 7. Write a function that simulates a traffic light system. The function should take the current light color (red, yellow, green) as input and print the corresponding action:
// "red" → "Stop"
// "yellow" → "Slow down"
// "green" → "Go"

// approch 1 
#include<iostream>
#include<string>
#include <cctype>
using namespace std;

string trafficlight(string a){
    

    if( a== "red"){
        cout << "Stop" << endl;
    }else if (a == "green"){
            cout << "Go" << endl;
    }else if(a == "yellow") {
        cout << "Slow down" << endl ;
    }else{
        cout << "not valid" << endl ;
    }
}

int main(){
    trafficlight("red");
}
