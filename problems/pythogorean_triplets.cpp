#include<iostream>
using namespace std;

bool check(int x,int y,int z){
    int a,b,c;
    a = max(x,max(y,z));
    if(a==x){
        b=y;
        c=z;
    }
    else if(a==y){
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a == b*b + c*c){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"Pythagorean Triplets";
    }
    else{
        cout<<"Not Pythagorean Triplet";
    }
return 0;
}