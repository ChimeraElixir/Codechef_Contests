//------version 1.0---------
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
//-----------version 2.0------------
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
        
        map <int,int> map;
        int value=1;
        for(int i=0;i<n;i++){
            int key;
            cin>>key;
            if(map.find(key)!=map.end())
                map[key]=map[key]+1;
                
            else{
                map[key]=value;
            }
        }
        std::map<int, int>::iterator itr;
        for (itr = map.begin(); itr != map.end(); ++itr){
            if(gcd(itr->first,itr->first+1)==lcm(itr->first,itr->first+1)){
                count=itr->second+itr->second+1;
            }
        }
        //for ( itr = map.begin(); itr != map.end(); ++itr) {
          //  if(gcd(*itr,*(itr+1))==lcm(*itr,*(itr+1))){
                    
            //}
            
        //}
        cout<<count<<endl;
    }
        
        /*set <int> s;
        
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x);
        }
        set<int>::iterator itr;
        set<int>::iterator itr2;
        for (itr = s.begin(); itr != s.end(); itr++) {
            for( itr2 = s.begin(); itr2 != s.end(); itr2++){
                if(gcd(*itr,*itr2)==lcm(*itr,*itr2)){
                    count++;
                }
            }
        }
    cout<<endl;
    }
        
        /*vector <int> v(n);
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
    }*/
    return 0;
}
