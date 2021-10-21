#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int arr[n];
    int result[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
        result[arr[i]-1] = i;
    }
    for(int i =0; i<n; i++){
        cout<< result[i]+1<< " ";
    }

    return 0;
}