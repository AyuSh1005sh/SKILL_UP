
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<pair<int,bool>> v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        
        v.push_back({x,true});
        v.push_back({y,false});
    }
    
    int ans=0;
    sort(v.begin(),v.end());
    int result=0;
    for(int i=0;i<2*n;i++){
        if(v[i].second == true){
            ans++;
            result=max(ans,result);
        }
        else{
            ans--;
        }       
    }
    cout<<result<<endl;
    return 0;
}
