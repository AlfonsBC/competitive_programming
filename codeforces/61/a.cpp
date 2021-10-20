#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// Bitwise XOR Operation
	string x,y;
	cin>>x>>y;
	string res;
	for(int i=0; i<x.length();i++){
	    if(x[i]!=y[i]){
	        res+= '1';
	    }else{
	        res+= '0';
	    }
	}
	cout<<res;
	return 0;
}
