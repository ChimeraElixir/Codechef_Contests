#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main() {
	// your code goes here
	ll t;
	cin>>t;
	
	while(t--){
        ll n,x;
	    cin>>n>>x;
	    
	    if(x==0||x==n)
	        cout<<"0"<<endl;
	
	    else if(x<=n-x)
	        cout<<x<<endl;
	
	    else
	        cout<<n-x<<endl;
	}    
	return 0;
}
