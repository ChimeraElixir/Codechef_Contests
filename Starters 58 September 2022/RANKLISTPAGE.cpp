#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    
	    if(x%25==0)
	        cout<<x/25<<endl;
	    
	    else
	    cout<<(x/25)+1<<endl;
	   
	}
	return 0;
}
