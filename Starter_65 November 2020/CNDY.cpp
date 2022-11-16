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
        ll count_1=0;
        ll count_2=0;
        map<int,int> map;
        for(int i=0;i<2*n;i++){
            int x;
            cin>>x;
            map[x]++;
        }
        
        std::map<int ,int> ::iterator itr;
        int flag=0;
        for(itr=map.begin();itr!=map.end();itr++){
            if((itr->second)>2){
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
        
    }
}


int main() {
	// your code goes here
	io_file();
	code_here();
	
	return 0;
}
