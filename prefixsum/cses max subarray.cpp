#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll prefix[n+1];
    prefix[0]=0;

    for(int i=0;i<n;i++){
    prefix[i+1]=prefix[i]+arr[i];
    
   }
   ll mini=prefix[0];
   ll maxi=prefix[1];
   for(int i=1;i<=n;i++){
     
    maxi=max(prefix[i]-mini,maxi);
      mini=min(prefix[i],mini);
    
   }
   
   
   cout<<maxi<<endl;
  // cout<<prefix[ans]<<endl;
   return 0;
}
