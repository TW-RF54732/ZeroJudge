#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    int ans1,ans2;
    cin>>a>>b>>c;
    if((pow(b,2)-4*a*c)>0){
        ans1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        ans2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"Two different roots ";
        if(ans1>ans2){cout<<"x1="<<ans1<<" , "<<"x2="<<ans2;}
        else{cout<<"x1="<<ans2<<" , "<<"x2="<<ans1;}
    }
    else if((pow(b,2)-4*a*c) == 0){
        ans1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        cout<<"Two same roots x="<<ans1;
    }
    else{cout<<"No real root";}
}