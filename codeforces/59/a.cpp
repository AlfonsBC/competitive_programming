#include <bits/stdc++.h>
using namespace std;
int main() {
    string s; cin>>s;
    int size = s.length();
    int is_upp = 0;
    for(int i =0; i<size;i++){
        if(isupper(s[i])){is_upp+=1;}
    }
    if(is_upp > size-is_upp){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
    return 0;
}

// https://codeforces.com/contest/59/submission/130221313