
// Online IDE - Code Editor, Compiler, Interpreter
#define ll long long
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<pair<ll,ll>>v;
        for(int i=0;i<n;i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        ll i=0,j=n-1;
        bool flag=false;
        while(i<j){
            if(v[i].first+v[j].first>x){
                j--;
            }
            else if(v[i].first+v[j].first<x){
                i++;
            }
            else{
                cout<<v[i].second+1<<" "<<v[j].second+1<<endl;
                flag=true;                break;
            }
            
        }
        if(flag==false){
            cout<<"IMPOSSIBLE"<<endl;
        }
        
    
    return 0;
}
