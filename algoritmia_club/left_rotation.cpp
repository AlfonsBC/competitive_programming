#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int d;
    cin>>n>>d;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i] = x;
    }

    int left_arr[n];
    for(int i=d;i<n;i++){
        left_arr[i-d] = arr[i];
    }
    for(int i=0;i < d; i++){
        left_arr[n-d + i] = arr[i];
    }
    
    for(int i = 0; i<n; i++){
        cout << left_arr[i]<< " ";
    }
    return 0;
}


//  1 2 3 4 
// [0 1 2 3 ---  4 5 6]
// [4 5 6 0 1 2 3 ]