#include<bits/stdc++.h>
using namespace std;


// int main(){
//     int n = 57;
//     cout<<n/10%10;
// }


int main(){
    string tmp_s;
    cin>>tmp_s;

    string tmp_s_reversed(tmp_s);
    reverse(tmp_s_reversed.begin(), tmp_s_reversed.end());
    cout << tmp_s_reversed << endl;

    return EXIT_SUCCESS;
}