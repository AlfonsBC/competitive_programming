#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string set_strings[n];
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        set_strings[i] = x;
    }
    int q; cin>>q;
    string query_s[q];
    for(int i=0;i<q;i++){
        string y;
        cin>>y;
        query_s[i] = y;
    }

    unordered_map<string, int> m;
    for(int i =0; i<n; i++){
        m[set_strings[i]]++;
    }
    int results[q];
    for(int i=0; i<q; i++){
        string x = query_s[i];
        if(m.find(x) != m.end() ) {
            results[i] = m[x];
        }else{
            results[i] = 0;
        }
    }
    for(int i =0;i<q;i++){
        cout<<results[i]<<'\n';
    }
    return 0;
}

// https://www.hackerrank.com/rest/contests/master/challenges/sparse-arrays/hackers/alfonsbc/download_solution