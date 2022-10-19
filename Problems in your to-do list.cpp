#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int y=0;
	    int n;cin>>n;
	    int arr[n];
	    for (int i=0;i<n;i++){
	        cin>>arr[i];
	        
	        if(arr[i]>=1000){
	            y++;
	        }
	    }cout<<y<<endl;
	}
	return 0;
}
