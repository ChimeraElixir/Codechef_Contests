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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n<=2 && count(s.begin(),s.end(),'1')<2||count(s.begin(),s.end(),'1')>3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }



int main() {
	// your code goes here
	io_file();
	ll t;cin>>t;
    while (t--){
        code_here();
    }
	return 0;
}
