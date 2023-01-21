
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    int pr[n];
    pr[0]=arr[0];
    int sr[n];
    sr[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        pr[i]=pr[i-1]+arr[i];
        
    }
    for(int i=n-2;i>=0;i--){
        sr[i]=sr[i+1]+arr[i];
        
    }
    for(int i=1;i<n;i++){
       if(pr[i-1]==sr[i]){
           ans++;
       }
        
    }
    if(n>2){
        cout<<ans<<endl;
    }
    else if(n==2){
        if(arr[0]==arr[1]){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}
