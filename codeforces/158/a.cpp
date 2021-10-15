#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    int arr [n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    bool arr_b [n];
    int k_g = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=k_g && arr[i] >0){
            arr_b[i] = true;
        }else{arr_b[i] = false;}
        //cout<<arr_b[i]<<" ";
    }
    int sum = 0;
    for(int i=0; i<n;i++){
        sum+=arr_b[i];
    }
    if(arr[0]==0){cout<<0;}
    else{cout<<sum;}
    return 0;
}
// https://codeforces.com/contest/158/submission/130191184