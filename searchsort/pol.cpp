
// Online IDE - Code Editor, Compiler, Interpreter
#define ll long long 
#include<iostream>

using namespace std;

int main()
{
    
        ll n,d;
        cin>>n>>d;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        ll ans=0;
        for(int i=0;i<n-1;i++){
            ll right =arr[i]+d;
            ll index=lower_bound(arr,arr+n,right)-arr;
            if(index==n||arr[index]!=right){
                index--;
                
            }
            ll between=index-i- 1;
            ans+= between*(between+1)/2;
        }
        
        cout<<ans<<endl;
        
    return 0;
}
