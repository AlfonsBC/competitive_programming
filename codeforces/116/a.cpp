#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int arr[n][2];
    int total =0;
    vector<int> results;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        arr[i][0] = a;
        arr[i][1] = b;
        int diff = b - a;
        total += diff;
        results.push_back(total);
    }

    int max = *max_element(results.begin(), results.end());
    cout<<max;
}

// https://codeforces.com/contest/116/submission/130288450