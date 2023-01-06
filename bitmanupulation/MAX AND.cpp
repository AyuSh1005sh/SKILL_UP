#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
       ll n;
	   cin>>n;
	   ll arr[n],brr[n];
	   for(ll i=0;i<n;i++){
		   cin>>arr[i];
	   }
	   for(ll i=0;i<n;i++){
		   cin>>brr[i];
	   }
	   sort(arr,arr+n);
	   sort(brr,brr+n);
	   ll ans = (arr[0]&brr[0]);
	   for(int i=1;i<n;i++){
		   ans = (ans & (arr[i]&brr[i]));
	   } 
	   cout<<ans<<endl;
	}
}