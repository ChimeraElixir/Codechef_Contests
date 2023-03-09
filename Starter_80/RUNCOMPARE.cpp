#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)

void io_file() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
}
bool isPrime(int n)
{
    // Check if n=1 or n=0
    if (n <= 1)
        return false;
    // Check if n=2 or n=3
    if (n == 2 || n == 3)
        return true;
    // Check whether n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    // Check from 5 to square root of n
    // Iterate i by (i+6)
    for (int i = 5; i <= sqrt(n); i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}

void code_here(){
        int n;
        cin>>n;
        int a[n],b[n],count=0;
        for(auto &x:a){
            cin>>x;
        }
        for(auto &x:b){
            cin>>x;
        }
        for(int i=0;i<n;i++){
            if((a[i]*2)>=b[i] && a[i]<=(b[i]*2)){
                count++;
            }
        }
        cout<<count<<endl;
        
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
