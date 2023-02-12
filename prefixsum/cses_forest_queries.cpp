#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ll n,m;
    cin>>n>>m;
    ll arr[n][n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='*'){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=0;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     //string s;
    //   // cin>>s;
    //     for(int j=0;j<n;j++){
    //       cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    ll prefix[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            prefix[i][j]=0;
        }
    }
    // for(int i=0;i<=n;i++){
    //     //string s;
    //     //cin>>s;
    //     for(int j=0;j<=n;j++){
    //         cout<<prefix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            prefix[i+1][j+1]=prefix[i][j+1]+arr[i][j]+prefix[i+1][j]-prefix[i][j];
            // else{
            // prefix[i+1][j+1]=prefix[i][j];}
        }
    }
    // for(int i=0;i<=n;i++){
    //     //string s;
    //     //cin>>s;
    //     for(int j=0;j<=n;j++){
    //         cout<<prefix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    while(m--){
        ll y1,x1,y2,x2;
        cin>>y1>>x1>>y2>>x2;
        //ll ans=0;
        // if(y1==y2 and x1==x2){
        //     cout<<1<<endl;
        //     //continue;
        // }
       // else{
           cout<<prefix[y2][x2]+prefix[y1-1][x1-1]-prefix[y1-1][x2]-prefix[y2][x1-1]<<endl; 
       // }
        
        
        //cout<<ans<<endl;
        
    }
    
    
    
     
    
   return 0;
}
