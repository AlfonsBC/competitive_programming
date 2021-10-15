#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[5][5];
    int id_x, id_y;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int x;
            cin >> x;
            arr[i][j] = x;
            if(x==1){
                id_x = i; 
                id_y = j;
            }
        }
    }
    int result;
    result = abs(2-id_y) + abs(2-id_x);
    cout<<result;
    return 0;
}