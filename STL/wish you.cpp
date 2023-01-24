#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int hash[101]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
            hash[arr[i]]++;
        }
        vector<int>ans;
        
        
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(arr[i]);
        }
        for(auto x:s){
            ans.push_back(x);
        }
        for(int i=0;i<101;i++){
            hash[i]--;
            while(hash[i]>=1){
                ans.push_back(i);
                hash[i]--;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        
    }
    
   
    return 0;
}