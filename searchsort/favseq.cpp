
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
        long long int brr[n];
        long long int i=0,j=n-1,k=0;
        long long int count=0;
         while(i<n && j>=0 && count<n){
             if(count%2==0){
                 brr[k]=arr[i];
                 count++;
                 k++;
                 i++;
             }
             else{
                 brr[k]=arr[j];
                 count++;
                 k++;
                 j--;
             }
         } 
         for(long long int i=0;i<n;i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
