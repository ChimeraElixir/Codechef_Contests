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
	   
	   map <int,int> map;
	   
	   loop{
	       int x;
	       cin>>x;
	       map[x]++;
	   }
	   std::map<int, int>::iterator itr;
	   int x=map.begin()->second;
	   
	   for (itr = map.begin(); itr != map.end(); ++itr){
            
            if(x<itr->second){
                x=itr->second;
            }
            
        }
        cout<<n-x<<endl;
	
	}
	return 0;
}
