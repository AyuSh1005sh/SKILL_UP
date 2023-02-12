
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>

using namespace std;

int main()
{
    
    string s;
    cin>>s;
    set<char> ss(s.begin(),s.end());
    vector<pair<char,int>> v;
    string k="";
    for(auto x:ss){
        k+=x;
    }
    for(int i=0;i<ss.size();i++){        
        v.push_back({k[i],0});
    }
    
    for(int i=0;i<s.size();i++){
        for(int j=0;j<ss.size();j++){
            if(s[i]==k[j]){
                v[j].second++;
            }
        }
    }

    for(int i=0;i<ss.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
