#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		int sum=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			
		}
		for(ll i=0;i<n;i++){
			
			if(arr[i]>0){
				sum+=arr[i];
			}
		}
		if(sum&(sum-1) || sum==0){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
	}
	
}