#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    vector<long long int> arr(n,0);
    for(long int i=0;i<m;i++){
        long int a,b,k;
        cin>>a>>b>>k;
        arr[a-1] += k;
        arr[b] -= k;
        }
         
    long long int sum=0;
    long long int x=0;

    for(int value : arr){
        x += value;
        if(x > sum){
            sum = x;
        }
    }

    cout<< sum;
    return 0;
}



    /* for(int j =0; j<m; j++){
        int a,b,k;
        a = queries[j][0] -1 ;
        b = queries[j][1] -1 ;
        k = queries[j][2] ;
        for(int i = a;i<=b;i++){
            arr[i] += k;
        }
    */

   // https://www.hackerrank.com/challenges/crush/submissions/code/236132164