#include <bits/stdc++.h>
#include <stack>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin>>n;
    int a;
    char command[10];
    stack<int> stack;
    while(n--){
        cin>>command;
        if(command[1]=="U"){
            cin>>a;
            if(stack.empty()){
                stack.push(a);
            }else{
                int top = stack.top();
                if(a<=top){
                    stack.push(a);
                }else{
                    stack.pop();
                    stack.push(a);
                    stack.push(top);
                }
            }
        }
        else if(command[1]=='O'){
            if(stack.empty()){
                cout<<"EMPTY"<<"\n"
            }else{
                int min = stack.top();
                stack.pop();
                int a = stack.top();
                if(min<a){
                    stack.pop());
                    stack.push(min);
                }else{
                    stack.pop();
                }
            }
        }else if(command[1]=='I'){
            if (stack.empty()) {
                cout<<"EMPTY"<<"\n";
            } else {
                cout<<stack.top()<<"\n";
            }
        }



    }
    return 0;
}
