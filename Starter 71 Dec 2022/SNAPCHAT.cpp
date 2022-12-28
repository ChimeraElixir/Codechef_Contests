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
        ll n;cin>>n;
        ll arr1[n],arr[n];
        loop{
            cin>>arr1[i];
        }
        loop{
            cin>>arr[i];
        }
        int count=0;
        int maximum=0;
        loop{
            if(arr1[i]!=0&&arr[i]!=0){
                count++;
                
                
            }
            else{
                maximum=max(maximum,count);
                count=0;
            }
        }
        cout<<max(maximum,count)<<endl;
        
    }
}


int main() {
	// your code goes here
	io_file();
	code_here();
	
	return 0;
}
