#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int p,q;
    cin>>p>>q;
    int n = p*q;
    int phi = (p-1)*(q-1);
    for(int e = 2;2 < phi;e++){
        if(gcd(e,phi)==1){
            break;
        }
    }
    
}