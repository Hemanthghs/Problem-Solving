// half_pyramid_numbers.cpp
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter row, col: ";
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}