
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int arr[n];
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long int blue = arr[0]+arr[1], red = arr[n-1];
        bool flag=false;
        long long int l=2,r=n-2;
        while(l<r){
        if(red>blue){
            flag=true;
           break;
        }
        blue+=arr[l];
        red+=arr[r];
        l++;
        r--;
        }
    
    if(flag || red>blue){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}
