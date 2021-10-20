#include <bits/stdc++.h>
using namespace std;

int get_lucky(string s){
    long long int sum = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='4' || s[i]=='7'){
            sum++;
        }
    }
    return sum;
};

int main() {
    string s;
    cin>>s;
    int sum = get_lucky(s);
    string str = to_string(sum);
    int last_sum = get_lucky(str);
    if(last_sum == str.size()){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


    

    return 0;
}