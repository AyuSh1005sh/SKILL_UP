#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll posOfMssb(ll n){
    ll pos=0;
    if(n==0) return 30;
    while(n!=0){
        pos++;
        n=n/2;
        
    }
    return pos-1;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll h[31]={0};
        for(ll i=0;i<n;i++){
            cin>>a[i];
            h[posOfMssb(a[i])]++;
        }
        
        ll count=n*(n-1)/2;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(min(a[j],a[i])<=(a[j]^a[i])){
        //             count++;
        //         }
        //     }
        // }
        for(ll i=0;i<30;i++){
            count -=(h[i]-1)*(h[i])/2;
        }
        cout<<count<<endl;
    }
}