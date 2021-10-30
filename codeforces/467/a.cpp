#include <bits/stdc++.h>
using namespace std;
int main() {
    int rooms; cin>> rooms;
    int living[rooms];
    int capacity[rooms];
    int r = 0;
    for (int i =0; i< rooms; i++){
        cin>>living[i]>>capacity[i];
        if(capacity[i] - living[i] > 1){
            r++;
        }
    }
    cout<<r;
    return 0;
}