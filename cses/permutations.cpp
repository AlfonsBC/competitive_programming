#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;
    if(n==1){cout<<1;return 0;}
    if (n==2||n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    if (n==4){
        cout<<"3 1 4 2";
        return 0;
    }
    if (n%2==0){
        int copy = n-1;
        while(n!=0){
            cout<<n<<" ";
            n -= 2;
        }
        while(copy>1){
            cout<<copy<<" ";
            copy-=2;
        }
        cout<<1;
        return 0;
    }else{
        int copy = n-1;
        while(n>0){
            cout<<n<<" ";
            n -= 2;
        }

        while(copy!=2){
            cout<<copy<<" ";
            copy -= 2;
        }
        cout<<2;
        

        return 0;
    }

    return 0;
}