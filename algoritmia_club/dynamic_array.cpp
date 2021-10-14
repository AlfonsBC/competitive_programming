#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,q;
    cin >>n>>q;
    int lastans=0;
    vector< vector<int> > seq(n);
    vector<int> ans;
    while(q--){
        int s,x,y;
        cin>>s>>x>>y;
        int idx = (x^lastans)%n;
        if(s==1){
            seq[idx].push_back(y);
        }else {
            int size = seq[idx].size();
            lastans = seq[idx][y%size];
            ans.push_back(lastans);
            cout<< lastans<<'\n';
        }

    }


    return 0 ;
}

    //for (auto i: ans){
    //    cout<< i << '\n';

// https://www.hackerrank.com/rest/contests/master/challenges/dynamic-array/hackers/alfonsbc/download_solution