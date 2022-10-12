#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   string s;
	   int n;
	   cin>>n;
	   cin>>s;
	   
	   int count_0,count_1;
	   count_0=count(s.begin(),s.end(),'0');
	   count_1=count(s.begin(),s.end(),'1');
	   if(count_0%2!=0&& count_1%2!=0){
	       cout<<"NO"<<endl;
	   }
	   else{
	       cout<<"YES"<<endl;
	   }
	   
	}
	return 0;
}
