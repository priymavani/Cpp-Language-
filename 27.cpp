// 27. Write a program to extract the file extension from a given filename.Example: Input: "document.pdf", Output: "pdf".



#include <iostream>
#include <string>
using namespace std;

// approch 1 
// by using rfind to know  index of charcter  which is nearest to end of string
// substring
string Extention(string file){

    int pos = file.find_last_of('.');
    // we can replace rfind to find_last_of  which works

    cout << pos << endl ;
    return file.substr(pos +1 );

}

int main(){

    string file = "coding.gita.students";
    cout <<   Extention(file) << endl ;

}




