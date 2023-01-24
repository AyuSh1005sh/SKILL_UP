#include <bits/stdc++.h>
//#define ll long long int
using namespace std;
int main() {
   long long  size=4*pow(10,4)+3*pow(10,3);
   long long  arr[size];
   for(int i=0;i<size;i++){
       arr[i]=i*(3*i+1)/2;
   }
   int t;
   cin>>t;
   while(t--){
       long long  n;
       cin>>n;
       long long  ans=0;
       while(n>1){
            if(arr[lower_bound(arr,arr+size,n)-arr]==n){
               ans++;
               break;
           }
           if(lower_bound(arr,arr+size,n)-arr <=0){
               break;
           }
           else{
           n = n - arr[lower_bound(arr,arr+size,n)-arr-1];
           ans++;
           }
       }
       cout<<ans<<endl;
   }
   return 0;
}
