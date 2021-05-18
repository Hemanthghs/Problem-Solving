#include<iostream>
using namespace std;

int n_sum(int n){

    return n*(n+1)/2;

    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     sum+=i;
    // }
    // return sum;
}

int main(){
    int n;
    cin>>n;
    cout<<n_sum(n);
return 0;
}