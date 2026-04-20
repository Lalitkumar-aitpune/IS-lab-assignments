// Write a Java/C/C++/Python program to implement DES algorithm.

#include<iostream>
using namespace std;
int main(){
    string text , key;
    cout<<"enter the text and key ";
    cin>>text>>key;

    string encrypt = "";
    for(int i=0;i<text.length();i++){
        encrypt += text[i]^key[i%key.length()];
    }
    for(int i=0;i<encrypt.length();i++){
        cout<<encrypt[i];
    }
    cout<<"\n";

    string decrypt = "";
    for(int i=0;i<encrypt.length();i++){
        decrypt += encrypt[i]^key[i%key.length()];
    }
    
    cout<<decrypt<<"\n";
}