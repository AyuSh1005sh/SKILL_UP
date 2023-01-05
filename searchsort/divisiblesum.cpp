
#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if(n==1){
            cout<<k<<endl;
            
        }
        else if(k>=n){
            long long int a=k/n;
            ll b=k%n;
            if(b!=0){
                a++;
            }
            cout<<a<<endl;
        }
        else {
            ll  a = n/k ;
            ll b = n%k;
            if(b!=0){
                a++;
            }
            k=k*a;
            ll c = k/n;
            ll d = k%n;
            if(d!=0){
                c++;
            }
            cout<<c<<endl;
            
        }
        
    }
    return 0;
}
