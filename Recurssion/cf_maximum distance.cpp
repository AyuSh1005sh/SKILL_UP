#include<bits/stdc++.h>
#define ll long long 
using namespace std;
ll distance(ll x1,ll y1,ll x2,ll y2){
    return pow((x2-x1),2)+pow((y2-y1),2);
}    
int main(){
       ll n;
       cin>>n;
       vector<ll> v;
       ll arr[n],brr[n];
       for(int i=0;i<n;i++){
          cin>>arr[i];
       }
       for(int i=0;i<n;i++){
         cin>>brr[i];
       }
       ll ans=0;
       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            v.push_back(distance(arr[i],brr[i],arr[j],brr[j]));
        }
       }
       for(int i=0;i<v.size();i++){
           ans=max(v[i],ans);
       }  
       cout<<ans<<endl;
return 0;
}