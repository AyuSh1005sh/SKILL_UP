#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n,d;
    cin>>n>>d;
    ll arr[n];
   // ll same=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        //if(arr[])
    }
//     for(int i=1;i<n;i++){
//         //cin>>arr[i];
//         if(arr[i]==arr[i-1]){
//             same++;
//         }
//     }
//     ll prefix[n];
//     prefix[0]=arr[0];
//     for(int i=1;i<n;i++){
//         prefix[i]=prefix[i-1]+arr[i];
//     }
//     ll ans=0;
//     sort(prefix,prefix+n);
//     //int i=n-2;j=n-1;
//     if(arr[0]==0 and same+1==n){
//         ans=n*(n+1)/2;
        
//     }
//     else{
//   for(int i=0;i<n;i++){
//       if(binary_search(prefix,prefix+n,prefix[i]+d)){
//           ans++;
//       }
//   }
   
//     for(int i=0;i<n;i++){
        
//         if(prefix[i]==d){
//          //   ans++;
//         }
//         cout<<prefix[i]<<" ";
        
//     }
//     }
//     cout<<ans<<endl;
//     //}
    ll ans=0;
    ll pref=0;
    unordered_map<ll,ll> countpref;
    countpref[pref]++;
    for(int i=0;i<n;i++){
        pref+=arr[i];
        ll need = pref-d;
        ans+=countpref[need];
        countpref[pref]++;
    }
    cout<<ans<<endl;
     
    
   return 0;
}
