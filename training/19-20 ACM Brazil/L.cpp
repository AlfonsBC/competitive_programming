#include <bits/stdc++.h>
using namespace std;

int binary(long long vS) {                         
  stack<int> st;
  int num = 0;
  while (vS)
    st.push(vS % 2), vS /= 2;
  while (!st.empty()){                        
    if(st.top() == 1){
        num++;
    }
    st.pop();
      
  }
  return num;
}


int main() {
    long long n;
    cin>>n;
    int x = binary(n);
    int result = pow(2,x);
    cout<<result;
    return 0;
}