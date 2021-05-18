#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n<=1) return 0;
    
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int m,n;
    cin>>m>>n;

    for(int i=m;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}