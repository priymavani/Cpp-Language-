// 3. Write a function that takes three sides of a triangle and checks whether the triangle is equilateral, isosceles, or scalene.

// approch 1
#include<iostream>
#include<string>
using namespace std ;

string triangle(int a ,int b , int c){
    if((a == b && a != c) || (b ==c && b!= a) || (a ==c && a!= b) ){
        cout<< "ISOSCELES" << endl;
    }else if (a == b && a== c){
        cout << "EQUILATERAL"<<endl;
    }else{
        cout<< "SCALENE" << endl;
    }
}
int main(){
    triangle(7,2,7);
    return 0;
}