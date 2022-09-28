#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	   int n;
	   cin>>n;
	   int arr[n];
	   int counteven=0,countodd=0,countone=0;
	   loop{
	       cin>>arr[i];
	   }
	   loop{
	       if(arr[i]%2==0 ){
	           counteven++;
	       }
	       
	       else{
	           countodd++;
	       }
	       
	   }
	   if(counteven==n){
	       cout<<0<<endl;
	   }
	   
	   else{
	       cout<<counteven<<endl;
	   }
	   
	}
	return 0;
}
