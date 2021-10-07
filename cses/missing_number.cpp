#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; 
    cin>>n;
    int arr[n] { 0 };
    int j;
    for(int i=0; i<n-1;i++){
        cin>>j;
        arr[j-1] = 1;
    }
    for(int i=0; i<n;i++){
        if(arr[i] == 0 ){
            cout<<i+1;
        }
    }

   return 0;
}