#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.sync_with_stdio(0); cin.tie(0);
    cin.exceptions(cin.failbit);

    long long t;
    cin>>t;
    while(t--){
        long long x,y,result;
        cin >> x>> y;
        long long d = max(x-1, y-1);
        if(d%2==0){
            if(x==d+1){result = d*d + y;}
            else{result = (d+1)*(d+1)-x+1;}
        }else{
            if(y==d+1){
                result=d*d+x;
            }else{
                result = (d+1)*(d+1)-y+1;
            }

        }
        cout<< result<<'\n';
    
    }
    return 0;
}