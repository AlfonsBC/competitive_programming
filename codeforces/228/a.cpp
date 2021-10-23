#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    int res = 0;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]!=arr[j]){
                res++;
            }
        }
    }
    if(res==6){cout<<0;};
    if(res==5){cout<<1;};
    if(res==3 || res==4){cout<<2;};
    if(res==0){cout<<3;};
    return 0;
}