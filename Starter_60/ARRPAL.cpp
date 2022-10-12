#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define loop for(ll i=0;i<n;i++)


int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> vec;
        int array[n];
        
        loop{  
            int x;
            cin>>x;
            array[i]=x;
        }
        
        int i = 0, j = n - 1;
        while (i < n / 2 || j >= n / 2){
            vec.push_back(array[j] - array[i]);
            i++;
            j--;
        }
        int k = vec[0];
        for (int i = 0; i < vec.size() - 1; i++){
            if (vec[i] < 0){
                k = -1;
                break;
            }
            if (vec[i] < vec[i + 1]){
                k = -1;
                break;
            }
        }
        if (vec[vec.size() - 1] < 0){
            cout << -1 << endl;
        }
        else{
            cout << k << endl;
        }
    }
    return 0;
