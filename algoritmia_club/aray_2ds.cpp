#include <bits/stdc++.h>

using namespace std;

int main() {
    int array [6][6];
    for(int i = 0; i< 6; i++){
        for(int j =0; j<6; j++){
            int x;
            cin >> x;
            array[i][j] = x;
        }
    }

    vector <int> array_sum;
    for(int i = 1; i<5; i++){
        for(int j=1; j<5; j++){
            int sum;
            sum = array[i-1][j-1]+array[i-1][j]+array[i-1][j+1]+array[i][j]+array[i+1][j-1]+array[i+1][j]+array[i+1][j+1];
            array_sum.push_back(sum);
        }
    }
    int largest_element = *max_element(array_sum.begin(), array_sum.end());
    cout << largest_element;
    return 0;
}