#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	     int x,y;
	     cin>>x>>y;
	     int a=0,b=y,c;
	     cout<<min((3*x)-(2*b),y)<<" "<<b<<" "<<max((3*x)-(2*b),y)<<" "<<endl;
	}
	return 0;
}
