#include<bits/stdc++.h>
using namespace std;
#define int long long 

void io_file() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
    
}

void code_here(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(auto &x:a){
        cin>>x;
    }
    int count_even=0,count_odd=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    if(k%2==0&&count_odd){
        cout<<count_even<<endl;
    }
    else if(k%2==1&&count_even%2==0){
        cout<<count_even/2<<endl;
    }
    else if(k%2==1&&count_even%2==1){
        cout<<(count_even/2)+1<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    // if(count_odd>=1&&k%2==0)
    //    cout<<count_even<<endl;
    //else if(count_even==n&&k%2==0)
    //    cout<<-1<<endl;
    //else if(count_even%2==0&&k%2==1)
    //    cout<<count_even/2<<endl;
    //else if(count_even%2!=0&&k%2==1&&count_even!=n)
    //    cout<<(count_even/2)+1<<endl;
        
    //else if(count_even%2==0&&k%2==1){
    //    cout<<count_even/2<<endl;
    //}
    //else if(count_even%2==1&&count_even%2<=count_odd&&k%2==1){
    //    cout<<count_even<<endl;
    //}
    //else if(count_even==n&&k%2==0)
    //    cout<<-1<<endl;
    //else if(count_even%2!=0)
    //    cout<<(count_even/2)+1<<endl;
    //else {
    //cout<<count_even/2<<endl;
    
    

    
}


int32_t main() {
    // your code goes here
    io_file();
    int t;cin>>t;
    while (t--){
        code_here();
    }
    
    
    return 0;
}