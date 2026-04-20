/*
Write a Java/C/C++/Python program that contains a string (char pointer) with a value \Hello
World’. The program should AND or and XOR each character in this string with 127 and display
the result
*/

#include<iostream>
using namespace std;
int main(){
    cout<<"enter the message\n";
    char str[100];
    cin.getline(str,100);

    //and operation
    for(int i=0;str[i]!='\0';i++){
        char r = str[i]&127;
        cout<<r;
    }
    cout<<'\n';

    // xor operation
    for(int i=0;str[i]!='\0';i++){
        char r = str[i]^127;
        cout<<r;
    }
    cout<<'\n';

}