#include<bits/stdc++.h>
using namespace std;
       
int main(){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++){
          cin>>arr[i];
      }
      int ans1=0,ans2=0;
      int count=0;
      int i=0,j=n-1;
      //bool flag= true;
      while(i<n && j>=0 && count<n){
        if(arr[i]<arr[j]){
            if(count%2==0){
                ans1+=arr[j];
                count++;
                //flag=false;
            }
            else{
                ans2+=arr[j];
                count++;
               // flag=true;
            }
            j--;
        }
        else{
            if(count%2==0){
                ans1+=arr[i];
                count++;
                //flag=false;
            }
            else{
                ans2+=arr[i];
                count++;
               // flag=true;
            }
            i++;
        }
      }    
      cout<<ans1<<" "<<ans2<<endl;
      
return 0;
}