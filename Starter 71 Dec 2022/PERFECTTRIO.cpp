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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c||b+c==a||a+c==b){
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
