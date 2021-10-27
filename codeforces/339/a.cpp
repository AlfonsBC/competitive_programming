#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int n = s.length();
    if(n==1){cout<<s;return 0;}
    vector<int> numbers;
    for(int i=0; i<n;i++){
        if(i%2==0){
        char to_add = s[i];
        int x = to_add - '0';
        numbers.push_back( x );
        //cout<<s[i];
        }
    }
    sort(numbers.begin(),numbers.end());
    int n_num = numbers.size();
    for(int i=0;i<n_num-1;i++){
        int x = numbers[i];
        cout<<x<<"+";
    }
    cout<<numbers[n_num-1];
    return 0;
    
}
// https://codeforces.com/contest/339/submission/130199193