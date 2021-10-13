#include <bits/stdc++.h>
const long long INF=1e18;
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> p(n);
    long long sum = 0;
    for(int i=0;i<n;++i){
        cin>>p[i];
        sum+=p[i];
    }
    int M = 1 << n;
    long long opt = INF;
    for(int m = 0; m<M ; ++m){
        long long t=0;
        for(int j =0; j<n;++j){
            if(m&(1<<j)){
                t+=p[j];
                opt = min(opt, abs(2*t-sum));
            }

        }
    }
    cout << opt << '\n';
    return 0;
}