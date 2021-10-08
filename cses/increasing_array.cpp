#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;cin>>n;
    long long arr[n];
    long long x;
    for(int i =0;i<n;i++){
        cin>>x;
        arr[i]=x;
    }
    long long rslt = 0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            long long to_add = arr[i-1] - arr[i];
            rslt+=to_add;
            arr[i] +=to_add;
        }
    }
    cout<<rslt;
    return 0;
}