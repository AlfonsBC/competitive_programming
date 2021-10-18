#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin>>n;
    long long int ans = 1;
    while(n){
        cout<<"n: "<<n<<"\n";
        cout<<"(n&1) :"<<(n&1)<<"\n";
        n/=2;
    }
    return 0;
}