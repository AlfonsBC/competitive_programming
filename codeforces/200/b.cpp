#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	double sum = 0;
	for(int i=0; i<n;i++){
	    double x;
	    cin>>x;
	    sum += x/100;
	}
	double result = sum / n;
	cout << result*100;
	
	return 0;
}
