#include<bits/stdc++.h>
using namespace std;

int main(){
    int y;
    cin>>y;
    if((y%4)==0){
        if((y%100)!=0){
            cout<<"閏年" ;      
        }
        else{cout<<"平年";}
    }
    if((y%400)==0){cout<<"閏年";}
    else{cout<<"平年";}
}