#include<bits/stdc++.h>
using namespace std;
       
int main(){
      long long int n,x;
      cin>>n>>x;
      long long int arr[n];
      for(long long int i=0;i<n;i++){
        cin>>arr[i];
      } 
      int i=0,j=n-1;
      sort(arr,arr+n);
      int dup=0;
      while(i<j){
        if(arr[i]+arr[j]<=x){
            dup++;
            i++;
            j--;
        }
        else if(arr[j]>x){
            j--;
        }
        else if(arr[i]+arr[j]>x){
            j--;
        }

      }
      cout<<n-dup<<endl;

return 0;
}