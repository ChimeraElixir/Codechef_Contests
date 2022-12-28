#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

void io_file() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
}

void code_here(){
    ll t;cin>>t;
    while (t--){
        int x,y;
        cin>>x>>y;
        
        if(x>10*y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


int main() {
	// your code goes here
	io_file();
	code_here();
	
	return 0;
}
