#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int n;
    cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans[n];
    ans[0]=arr[0];
    cout<<ans[0]<<" ";
    for(int i=1;i<n;i++){
        ans[i]=arr[i]-arr[i-1];
        cout<<ans[i]<<" ";
    }
    cout<<endl;
     
    
   return 0;
}
