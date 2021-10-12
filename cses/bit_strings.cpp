#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1000000007;
int main() {
    int n; cin>>n;
    long long  result = 1;
    while (n--)
    {   
        result = 2*result ;
        result = result%MOD;
    }
    cout<<result;
    return 0;
}