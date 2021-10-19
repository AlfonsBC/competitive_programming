#include <bits/stdc++.h>
using namespace std;
int altura(double b, int a){
    return ceil( (2*a)/b );
}


int main() {
int a;
double b;
cin >> b >> a;
int h = altura(b,a);
cout << h << "\n";
}