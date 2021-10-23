#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    unordered_map<char, int> m;
    for(int i =0; i<s.length(); i++){
        m[s[i]]++;
    }
    int sze = m.size();
    if(sze%2==0){cout<<"CHAT WITH HER!";}
    else{cout<<"IGNORE HIM!";}
    return 0;
}

// https://codeforces.com/contest/236/submission/130219290