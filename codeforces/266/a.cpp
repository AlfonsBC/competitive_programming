#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    string s; cin>>s;
    int to_take = 0;
    int total=0;
    for(int i=0;i<n;i++){
        if(to_take==0){
        for(int j=1;j<n-i;j++){
            char color = s[i];
            char color_ad = s[i+j];
            if(color==color_ad){
                to_take +=1;
                total +=1;
            }else{
                break;
            }
        } 
        }
        else{to_take -= 1;}
    }
    cout<<total;
    return 0;

}

// https://codeforces.com/contest/266/submission/130207384