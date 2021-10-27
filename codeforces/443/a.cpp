#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	getline(cin, s);
	set<char> s1;
	for(int i=0;i<s.length();i++){
    //cout<<s[i]<<endl;
	    if(isalpha(s[i])){
	        s1.insert(s[i]);
	    }
	}
cout<<s1.size();
	return 0;
}
