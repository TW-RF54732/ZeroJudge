#include<bits/stdc++.h>
using namespace std;


int main(){
    string input;
    cin>>input;
    string rw(input);
    reverse(rw.begin(), rw.end());
    if(input==rw){cout<<"yes";}
    else{cout<<"no";}
    return 0;
}//success
