
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            
             while(true){
                 
                 if(arr[i]==1){
                     break;
                 }
                 i++;
             }
            
            
            while(true){
                if(arr[j]==0){
                    break;
                }
                j--;
            }
            if(i<j){
            arr[j]=arr[i];
            arr[i]=0;
            ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
