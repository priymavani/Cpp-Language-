// 22. Write a program to find the length of a given string.Example:Input:inputString = "Hello, World!"; Output:13;

// //approch 1
// #include<iostream>
// #include<string>
// using namespace std;
// void length(string str){
//     int LengthoOfString = str.size();
//     cout << "Length : " << LengthoOfString;
// }
// int main(){
//     length("hello world");
// }




// //approch 2
// #include<iostream>
// #include<string>
// using namespace std;

// int lengthOfString(string str ){

//     int count = 0;
//     for(int i =0 ; str[i] != '\0'; i++){
//         count ++ ;
//     }
//     return count ;
// }
// int main(){

//     string str = "priy mavani";

//     cout << lengthOfString(str) << endl ;
//     return 0 ;

// }


// //approch 3
// #include<iostream>
// #include<string>
// #include<iterator> //distance function
// using namespace std;

// int lengthOfString(string str ){

   
//     return distance(str.begin() , str.end()) ;
// }
// int main(){

//     string str = "priy  mavani";

//     cout << lengthOfString(str) << endl ;
//     return 0 ;

// }

