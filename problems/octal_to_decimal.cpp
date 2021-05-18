#include<iostream>
#include<cmath>
using namespace std;

int oct_dec(int oct){

   int dec, x, bit;
   dec = 0;
   x = 1;
   while(oct>0){
       bit = oct%10;
       dec += x*bit;
       x *= 8;
       oct/=10;
   }

   return dec;

}

int main(){
    int oct;
    cin>>oct;
    cout<<oct_dec(oct);
return 0;
}