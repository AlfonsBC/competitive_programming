#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,t; 
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++){
        int to_b = 0;
        for(int j=0;j<n;j++){
            if(s[j]=='B' && s[j+1]=='G'){
                if(to_b == 0){
                    s[j] = 'G';
                    s[j+1] = 'B';
                    to_b += 1;
                }else{to_b-=1;}
            }else if(to_b!=0){to_b-=1;}
        }
        
    }
    cout<<s;

    return 0;
}

// https://codeforces.com/contest/266/submission/130291487