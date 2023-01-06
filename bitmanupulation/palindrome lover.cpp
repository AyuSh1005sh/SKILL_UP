#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
        ll n;
		cin>>n;
		ll arr[n];
		ll ones=0,zeroes=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			
		}
		for(ll i=0;i<n;i++){
			
			if(arr[i]&1){
				ones++;
			}
			else{
				zeroes++;
			}
		}
		// 10100101
		if(zeroes==0 or ones==0){
			cout<<1<<endl;
		}
		else if(zeroes%2==0 and ones%2==1){
			cout<<1<<endl;
		}
		else if(zeroes%2==1 and ones%2==0){
			cout<<1<<endl;
		}
		else if(zeroes%2==0 and ones%2==0){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}