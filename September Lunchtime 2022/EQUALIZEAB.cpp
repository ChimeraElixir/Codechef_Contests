#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   long long a,b,x;
	   cin>>a>>b>>x;
	   
	   if(a==b){
	       cout<<"Yes"<<endl;
	   }
	   else if((max(a,b)-min(a,b))%(2*x)==0){
	       cout<<"Yes"<<endl;
	   }
	   else{
	       cout<<"No"<<endl;
	   }
	   
	}
	return 0;
}
