#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    ll arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	   // int ans=1;
	    ll prefix[n+1];
	    
	    prefix[0]=0;
	    
	    for(int i=0;i<n;i++){
	        
	        prefix[i+1]=prefix[i]+arr[i];
	        
	    }
	    ll x=1;
	    for(int i=1;i<=n;i++){
	        x+=prefix[x];
	        //prefix[i+1]=prefix[i]+arr[i];
	        if(x>=n){
	            cout<<i<<endl;
	            break;
	        }
	    }
	    
	   
	}
	return 0;
}
