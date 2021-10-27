#include <bits/stdc++.h>
using namespace std;

bool ddigits(string s){
    int k = 0;
    for(int i=0;i<3;i++){
        for(int j = i + 1; j<4; j++){
            if(s[i]==s[j]){
                k = 1;
            }
        }
    }
    if(k==0){
        return true;
    }else{
        return false;
    }
    
}

int main() {
    int year;
    cin >> year;
    year++;
    string str = to_string(year);
    bool s = ddigits(str);
    while(s == false){
        s = ddigits(str);
        if(s == false){year++;}
        str = to_string(year);
    }
    cout<<year;
    return 0;
}