#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n; cin>>n;
	int arr[n];
	for(int i=0;  i<n;i++){
	    cin>>arr[i];
	}
	int idmax=0;
	int id_min=0;
	int max=-1;
	int min=150;
	for(int i=0;  i<n;i++){
	    if(max<arr[i]){
	        max = arr[i];
	        idmax = i;
	    }
	    if(min>=arr[i]){
	        min = arr[i];
	        id_min = i;
	    }
	    
	}
	if(id_min >idmax){
	    cout<< abs(idmax-0)+abs(id_min-(n-1))<<endl;
	}else {
	    cout<< abs(idmax-0)+abs(id_min-(n-1))-1<<endl;
	}
	//cout<<idmax<<endl;
	//cout<<id_min<<endl;
	return 0;
}
