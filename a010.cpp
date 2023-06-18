#include<bits/stdc++.h>
using namespace std;

int main(){
    int in;
    int a = 2;
    cin>>in;
    while(in>=a){
        int t=0;
        while(in%a==0){
            in = in/a;
            t++;
        }
        if(in+1<=a){
            
            if(t==1){cout<<a;}
            if(t>1){cout<<a<<"^"<<t;}
            break;
        }
        if(t==1){cout<<a<<" * ";}
        if(t>1){cout<<a<<"^"<<t<<" * ";}
        a++;
    }
}