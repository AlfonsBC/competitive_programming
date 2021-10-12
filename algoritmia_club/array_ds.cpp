#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int array [n];
    for(int i = 0; i < n; i++ ){
        int x;
        cin >> x;
        array[i] = x;
    }
    int rev_array [n];
    for(int j =0; j<n; j++ ){
       rev_array[j] = array[n-j-1];
    }

    for(int k =0; k < n; k++){
        cout << rev_array[k] << " ";
    }

    return 0;
}