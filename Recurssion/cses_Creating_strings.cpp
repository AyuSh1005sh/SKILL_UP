#include<bits/stdc++.h>
using namespace std;
// void createStrings(string s,vector<string>&ans){
    
// }

int main(){
         string s;
         cin>>s; 
         vector<string> ans;
         sort(s.begin(),s.end());
         //createStrings(s,ans);
         ans.push_back(s);
         while(next_permutation(s.begin(),s.end())){
           ans.push_back(s);
        }
        
         cout<<ans.size()<<endl;
         for(auto x:ans){
            cout<<x<<endl;
         }
return 0;
}