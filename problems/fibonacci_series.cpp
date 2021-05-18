#include<iostream>
using namespace std;

void fibonacci(int n){
    int a1,a2,next;
    a1 = 0;
    a2 = 1;
    for(int i=1;i<=n;i++){
        cout<<a1<<" ";
        next = a1+a2;
        a1 = a2;
        a2 = next;
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}