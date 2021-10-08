#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.size();
    int ans = 1;
    int r=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){r++;}
        else{r=1;}
        ans=max(ans,r);
    }
    cout<<ans;
    return 0;
}