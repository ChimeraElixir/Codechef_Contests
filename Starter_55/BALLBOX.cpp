#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	     int n,k;
	     cin>>n>>k;
	     
	     if((k*(k+1))/2<=n){
	         cout<<"YES"<<endl;
	     }
	     else{
	         cout<<"NO"<<endl;
	     }
	    
	}
	return 0;
}
