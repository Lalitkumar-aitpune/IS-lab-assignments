/*Write a Java/C/C++/Python program to perform encryption and decryption using the method of
Transposition technique*/

#include<iostream>
using namespace std;
int main(){
    cout<<"enter the mess to encrypt\n";
    string str;
    cin>>str;

    string encrypt = "";
    string decrypt = "";

    string a,b;

    for(int i=0;i<str.length();i++){
        if(i%2==1){
            b = b + str[i];
        }else{
            a = a + str[i];
        }
    }
    encrypt = a + b;
    cout<<"encrypted data : "<<encrypt<<"\n";

    int i = 0; int j = (str.length()+1)/2;
    int m = j;
    while(i <  m || j < str.length()){
        decrypt += encrypt[i];
        decrypt += encrypt[j];
        i++;
        j++;
    }
    cout<<"decrypted data : "<<decrypt<<"\n";
}