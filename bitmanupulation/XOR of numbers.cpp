#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
   ll n,q;
   cin>>n>>q;
   ll a[n];
   for(ll i=0;i<n;i++){
	   cin>>a[i];

   }
   ll prefix[n];
   prefix[0]=a[0];
   ll suffix[n];
   suffix[n-1]=a[n-1];
   for(ll i=1;i<n;i++){
	   prefix[i] = a[i] ^ prefix[i-1];

   }
   for(ll i=n-2;i>=0;i--){
	   suffix[i] = a[i] ^ suffix[i+1];

   }
   while(q--){
     ll l,r;
     cin>>l>>r;
     if(l==1){
            cout<<suffix[r]<<endl;
     }
     else if(r==n){
        cout<<prefix[l-2]<<endl;
     }
     else{
       cout<<(prefix[l-2]^suffix[r])<<endl;
     }
     
   }
   

}