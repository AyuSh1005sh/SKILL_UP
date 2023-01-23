#include <bits/stdc++.h>
#define ll long long 

using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	    if(n&1){
			cout<<-1<<endl;
			continue;
		}
		// if(n%4==0){
		// 	long long int ans = pow(n/4,4);
		// 	cout<<ans<<endl;
		// }
		else if(n%2==0){
          vector<ll> v;
		  for(int i=1;i<=sqrt(n);i++){
			  if(n%i==0){
				  v.push_back(i);
				  if((n/i)!=i)
				  v.push_back(n/i);
			  }
		  }
		  ll ans=-1;
		    vector<ll> h(n+1);
            for(auto a: v){
               h[a]++;
            }
		  //ll a=0,b=0,c=0;
		  for(auto a:v){
			  for(auto b:v){
				  for(auto c:v){
					  ll x=n-a-b-c;
					  if(x>0 and h[x]==1){
					  ans=max(ans,(a*b*c*x));
					  }
				  }
			  }
		  }
		  cout<<ans<<endl;
		}
			
		

	}
	

}