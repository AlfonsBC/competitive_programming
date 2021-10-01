#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    if(isupper(s[0])){
        cout<<s;
    }else{
        char fst = toupper(s[0]);
        s[0] = fst;
        cout<<s;
    }
    return 0;

}

// https://codeforces.com/contest/281/submission/130201395