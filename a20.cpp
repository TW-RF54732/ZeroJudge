#include<bits/stdc++.h>
using namespace std;

// A=10 台北市     J=18 新竹縣     S=26 高雄縣
//       B=11 台中市     K=19 苗栗縣     T=27 屏東縣
//       C=12 基隆市     L=20 台中縣     U=28 花蓮縣
//       D=13 台南市     M=21 南投縣     V=29 台東縣
//       E=14 高雄市     N=22 彰化縣     W=32 金門縣
//       F=15 台北縣     O=35 新竹市     X=30 澎湖縣
//       G=16 宜蘭縣     P=23 雲林縣     Y=31 陽明山
//       H=17 桃園縣     Q=24 嘉義縣     Z=33 連江縣
//       I=34 嘉義市     R=25 台南縣

int main(){
    map<string,int>id{
    {"A",10},{"B",11},{"C",12},{"D",13},{"E",14},{"F",15},{"G",16},{"H",17},{"J",18},
    {"K",19},{"L",20},{"M",21},{"N",22},{"S",26},{"O",35},{"P",23},{"Q",24},{"R",25},
    {"T",27},{"U",28},{"V",29},{"W",32},{"X",30},{"Y",31},{"Z",33},{"I",34}
};
    int count[10],ans[10],f=0;
    string idin,N;
    cin>>idin;
    N = idin[0];
    count[0] = id[N];
    for(int i = 1;i<10;i++){
        count[i] = idin[i] - 48;
    }//取值
    
    //計算...
    ans[0] = count[0]%10*9 + count[0]/10%10;//ok
    for(int i = 8;i>=1;i--){
        ans[i] = count[i] * (9-i);
    }
    for(int i = 0;i<9;i++){
        f = f + ans[i];
    }
    f = f + count[9];
    if(f%10==0){cout<<"real";}
    else{cout<<"fake";}//success
}