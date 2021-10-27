#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int home[n];
    int guest[n];
    for(int i=0;i<n;i++){
        cin>>home[i]>>guest[i];
    }
    int r = 0;
    for(int i=0;i<n;i++){
        int x = home[i];
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                int y = guest[j];
                if(x==y){
                    r++;
                }
            }
        }
    }
    cout<<r;
    return 0;
}