#include <bits/stdc++.h>

using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
      vector<int> odd,even;
      for(int i=0;i<n;i++){
          int p;
          cin>>p;
          if(p%2==0){even.push_back(p);}
          else{odd.push_back(p);}
      }
      bool flag=false;
      if(odd.size()>1){
      for(int i=0;i<odd.size()-1;i++){
          if(odd[i+1]-odd[i]<0){flag=true;break;}
      }
      }
      if(even.size()>1){
      for(int i=0;i<even.size()-1;i++){
          if(even[i+1]-even[i]<0){flag=true;break;}
      }
      }
      if(flag==false)
      {cout<<"YES"<<endl;}
      else{cout<<"NO"<<endl;}
   }
 }