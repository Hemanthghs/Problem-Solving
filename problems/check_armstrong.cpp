#include<iostream>
#include<math.h>
using namespace std;

int digit_count(int n){
    int count;
    while (n!=0)
    {
        n/=10;
        count++;
    }
    return count;
    
}

int main(){
    int n,original,rem,num_digits;
    int sum=0;
    cin>>n;
    num_digits=digit_count(n);
    original = n;
    while(n!=0){
        rem = n%10;
        sum = sum+pow(rem,num_digits);
        n=n/10;
    }
    if(original == sum){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}
