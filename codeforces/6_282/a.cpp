#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int x = 0;
    while(n--){
        bool is_plus;
        string to;
        cin >> to;
        for(int i=0;i<3;i++){
            if(to[i] == '+'){is_plus = true;break;}
            if(to[i] == '-'){is_plus = false;break;}
        }
        if(is_plus){
            x+=1;
        }else{x-=1;}
    }
    cout<<x;
}