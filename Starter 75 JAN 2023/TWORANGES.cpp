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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        set <int> s;
        for(int i=a;i<=b;i++){
            s.insert(i);
        }
        for(int i=c;i<=d;i++){
            s.insert(i);
        }
        cout<<s.size()<<endl;
        /*int min_=min(a,c);
        int max_=max(b,d);
        if(b>=c){
            cout<<max_-min_+1<<endl;
        }
        else{
            if(!(b-a)+(d-c)){
                cout<<1<<endl;
            }
            else{
                cout<<(b-a+1)+(d-c+1)<<endl;
            }
        }*/
        
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
