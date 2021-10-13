#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        if((a+b)%3 ==0 && a*2>=b && b*2>=a){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}