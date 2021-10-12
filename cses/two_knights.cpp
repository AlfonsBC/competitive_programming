#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    long long result=0;
    for (long long i = 1; i<=n;i++){
        result = (i*i)*(i*i-1)/2 - 4*(i-1)*(i-2);
        cout<<result<<"\n";
    }
    return 0;
}