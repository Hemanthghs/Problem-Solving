#include<iostream>
using namespace std;

unsigned long long int fact(int n){
    unsigned long long int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
return 0;
}