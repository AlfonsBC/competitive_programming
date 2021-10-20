#include <bits/stdc++.h>
using namespace std;

void solve(long long int n){
    if(n<3){cout<<0<<"\n";return;}
    int result = (n-1)/2;
    cout<<result<<'\n';
    return;
}

int main() {
    int t; cin>>t;
    long long int n;
    while(t--){
        cin>>n;
        solve(n);
    }
    return 0;
}