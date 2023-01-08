#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int setbits(int n){
	int ans=0;
	while(n>0){
		n=n&(n-1);
		ans++;
	}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		ll ans=0;		
		ll a=0;
		ll prefix[n],suffix[n];
        for(int i=0;i<n;i++){
			a=(a|arr[i]);		
		}
		prefix[0]=arr[0];
		for(int i=1;i<n;i++){
           prefix[i]=prefix[i-1]|arr[i];
		}
		suffix[n-1]=arr[n-1];
		for(int i=n-2;i>=0;i--){
           suffix[i]=suffix[i+1]|arr[i];
		}
		for(int i=0;i<n;i++){
			if((prefix[i-1]|suffix[i+1])==a){
				ans=max(ans,arr[i]);
			}
		}
		cout<<ans<<endl;


		
	}
}
