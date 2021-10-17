#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, c, sec;
    cin>>N>>c>>sec;
    if(N==2){
        if(c>=sec){cout<<"S";}
        else{cout<<"N";}
        return 0;
    }
    int i = 0;
    while(c>=sec){
        i++;
        cin>>sec;
    }
    if(i<N){
        cout<<"N";
    }else{
        cout<<"S";
    }
    return 0;
}