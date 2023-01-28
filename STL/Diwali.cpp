#include <bits/stdc++.h>
#define ll long long 
using namespace std;

ll binarys(ll arr[],ll l,ll h,ll key ){
    while(l<=h){
    ll mid = (l+h)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]>key){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
    
    }
    return -1;
}
int main() {
   ll t;
   cin>>t;
   while(t--){
       
       ll n;
       
       cin>>n;
       
       ll arr[n+2];
 
       for(ll i=0;i<n+2;i++){
           cin>>arr[i];
       }
       
       sort(arr,arr+n+2);
       
       ll prefix[n+2];
       
       prefix[0]=arr[0];
       
       for(ll i=1;i<n+2;i++){
           
           prefix[i]=prefix[i-1]+arr[i];
           //cout<<prefix[i-1]<<endl;
         
       }
       
       if(prefix[n-1]==arr[n]){
           
           for(int i=0;i<n;i++){
               
               cout<<arr[i]<<" ";
           }
           
           cout<<endl;
           
           continue;
        }
        ll x = prefix[n]-arr[n+1];
        if(x<0){
            cout<<-1<<endl;
            continue;
        }
      // ll index = binarys(arr,0,n+1,x);
      ll index =-1;
      for(int i=0;i<n+1;i++){
          if(arr[i]==x){
              index=i;
          }
           
      }
       
       if(index==-1 ){
           
               cout<<-1<<endl;
           
       }
       
       else{
           
           for(int i=0;i<n+1;i++){
               
               if(i!=index){
                   
                   cout<<arr[i]<<" ";
               }
               
           }
           cout<<endl;
       }
      
       
   }
   }