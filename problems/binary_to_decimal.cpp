#include<iostream>
#include<cmath>
using namespace std;

int bin_dec(int bin){

    int bit,count,dec;
    count = 0;
    dec = 0;

    while(bin!=0){
        bit = bin%10;
        dec += bit*pow(2,count);
        bin/=10;
        count++;
    }
    return dec;

}

int main(){
    int bin;
    cin>>bin;
    cout<<bin_dec(bin);
return 0;
}