#define ll unsigned long long
#include<bits/stdc++.h>
using namespace std;
 
ll solve(ll n,ll k)
{
 
  if(n<k)
  {
    return (n*(n+1)/2);
  }
  else if((n/k)==1)
  {
    return n*(n+1)/2-k+1;
  }
  else
  {
	   ll total;
       ll b=0;
       ll ans;
      total=n*(n+1)/2;
      ll divisors=n/k;
      b=b+solve(n/k,k);
      ll c=((divisors)*(2*k+(divisors-1)*k))/2;   
      return (total-c+b);
 
  }
 
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,k;
      cin>>n>>k;
      ll a=solve(n,k);
      cout<<a<<endl;
 
 
 
    }
 
}