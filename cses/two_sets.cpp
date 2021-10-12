#include <bits/stdc++.h>
using namespace std;
vector<int> a,b;

void solve(int n){
    if(n == 3){
        a.push_back(3);
        b.push_back(1), b.push_back(2);
        return;
    }
    if(n==0) return;
    a.push_back(n);
    a.push_back(n-3);
    b.push_back(n-1);
    b.push_back(n-2);
    solve(n-4);
}


int main() {
    int n; cin>>n;
    if(n%4 == 1 || n%4 == 2) {
        cout<<"NO";
        return 0;
    }
    solve(n);
    cout<<"YES\n";
    int  k = a.size();
    int  m = b.size();
    cout<<k<<"\n";
    for(int i: a) cout<< i << " ";
    cout<<'\n';
    cout<<m<<'\n';
    for(int i: b) cout<< i << " ";
        cout<<'\n';
    return 0;
}