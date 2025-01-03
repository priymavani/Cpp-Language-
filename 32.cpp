// 32.Write a program that categorizes a person’s age group based on the given age:
// Less than 13: "Child"
// Between 13 and 19: "Teenager"
// Between 20 and 59: "Adult"
// 60 and above: "Senior"


// // approch 1
// #include<iostream>
// using namespace std ;

// void agegroup(int n){

//     if((n < 13 )){
//         cout << "Child" << endl;
//     }else if( n <= 19){
//         cout << "Teenager" << endl ;
//     }else if( n <= 59){
//         cout << "Adult" << endl ;
//     }else {
//         cout << "Senior" << endl ;
//     }

// }

// int main(){
//     agegroup(19);
// }

// // approch 2
// #include<iostream>
// using namespace std ;

// void agegroup(int n){

//    switch (n)
//    {
//    case 0 ... 12:
//     cout << "Child" ;
//     break;

//     case 13 ... 19:
//     cout << "Teenager" ;
//     break;

//     case 20 ...  59:
//     cout << "Adult" ;
//     break;
   
  
    
//    default:
//    cout << "Senior" ;
//     break;
//    }

// }

// int main(){
//     agegroup(19);
// }

// // approch 3
// #include<iostream>
// using namespace std ;

// void agegroup(int n){

//    cout << 
//    (n < 13 ? "child" : (n <=19? "teenager" : (n <= 59? "Adult" : "Senior" ))) << endl ;

// }

// int main(){
//     agegroup(19);
// }


