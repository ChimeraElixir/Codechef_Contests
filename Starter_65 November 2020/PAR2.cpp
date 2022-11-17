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
        int n;
        cin>>n;
        if(n%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
}


int main() {
	// your code goes here
	io_file();
	code_here();
	
	return 0;
}
