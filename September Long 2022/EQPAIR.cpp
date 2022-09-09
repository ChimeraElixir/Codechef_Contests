#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)


int main() {
    // your code goes here
    int t;
    cin>>t;
    
    while(t--){
        int n,count=0;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(v[i],v[j])==lcm(v[i],v[j])){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
