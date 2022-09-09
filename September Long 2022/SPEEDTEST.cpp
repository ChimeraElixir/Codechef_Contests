#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   float a,x,b,y;
	   cin>>a>>x>>b>>y;
	   
	   
	   if(a/x<b/y){
	       cout<<"Bob"<<endl;
	   }
	   else if(a/x>b/y){
	       cout<<"Alice"<<endl;
	   }
	   else{
	       cout<<"Equal"<<endl;
	   }
	}
	return 0;
}
