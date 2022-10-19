#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int o=(x*3)-(n-x);
	    if(o>=p){
	        cout << "Pass" << endl;
	    }
	    else{
	        cout << "Fail" << endl;
	    }
	}
	return 0;
}
