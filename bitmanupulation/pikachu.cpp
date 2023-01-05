#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main() {
	ll n,k;
	cin>>n>>k;
	ll arr[n];//ans[n];
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		//ans[i]=arr[i];
	}	
	if(n/2<k){
     for(ll i=1;i<n;i++){
		arr[i]=arr[i]|arr[i-1];
	} 
	for(ll i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	}
	else{
	for(ll i=0;i<k;i++){
		ll j=n-1;
		while(j>0){
			arr[j]=(arr[j]|arr[j-1]);			
			j--;
		}

	}
	for(ll i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	}
}