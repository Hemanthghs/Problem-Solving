#include<iostream>
#include<cmath>
using namespace std;

int bin_dec(int bin){

   int dec, x, bit;
   dec = 0;
   x = 1;
   while(bin>0){
       bit = bin%10;
       dec += x*bit;
       x *= 2;
       bin/=10;
   }

   return dec;

}

int main(){
    int bin;
    cin>>bin;
    cout<<bin_dec(bin);
return 0;
}