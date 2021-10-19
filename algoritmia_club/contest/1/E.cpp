#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    stack<int> stack;
    std::stack<int> ministack;
    while(n--){
        string command;
        int a;
        cin>>command>>a;
        if(command=="PUSH"){
            stack.push(a);
            if(ministack.empty()){
                ministack.push(a);
            }else{
                int b = ministack.top();
                if(b>a){
                    ministack.pop();
                    ministack.push(a);
                    }
            }
        }else if(command=="MIN"){
            if(stack.empty()){
                cout<<"EMPTY"<<"\n";
            }else{
                
            }
        }else if(command=="POP"){
            if(stack.empty()){
                cout<<"EMPTY"<<"\n";
            }
            else{
                stack.pop();
            }
        }

        a = 0;
    }
    return 0;
}