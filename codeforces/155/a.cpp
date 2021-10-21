#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int scores [n];
    int max_score ;
    int min_score ;
    int result = 0;
    for(int i=0;i<n;i++){
        int grade;
        cin>>grade;
        scores[i] = grade;
        if(i==0){
            max_score = grade;
            min_score = grade;
        }
        if(i>0){
            if(max_score < grade){
                max_score = grade;
                result += 1;
            }
            else if(min_score > grade){
                min_score = grade;
                result += 1;
            }
        }
    }
    cout<<result;

    return 0;
}

// https://codeforces.com/contest/155/submission/130507757