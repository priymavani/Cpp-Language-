// 23. Write a program to concatenate two given strings. Example: Input: ("hello", " world"), Output: "hello world".

//approch 1
// #include<iostream>
// using namespace std;
// #include<string>
// void concate(string str1,string str2){
//         string conc = str1 + str2;
//         cout << conc;
// }
// int main(){
//     concate("hello" , " world");
// }

// // approch 2
// #include<iostream>
// using namespace std;
// #include<string>
// void concate(string str1,string str2){
//         str1.append(str2);
//         cout << str1;
// }
// int main(){
//     concate("hello" , " world");
// }

//approch 3
#include<iostream>
using namespace std;
#include<cstring>
void concate(){
        char str1[50]="hello";
        char str2[10] = " world";
        strcat(str1, str2);
        cout << str1;
}
int main(){
    concate();
}