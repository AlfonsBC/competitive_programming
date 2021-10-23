#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int result = 0;
    for(int x=0; x<=4000;x++){
        for(int y=0;y<=4000;y++){
            int z_c;
            z_c = n - (x*a+y*b);
            if(z_c < 0){break;}
            double z = (z_c / (double) c);
            int sum = x+y+(int)z;
            if((int)z == z){result = max(result,sum );}
        }
    }
    cout<<result;
    
    return 0;
}

// https://codeforces.com/contest/189/submission/130511825