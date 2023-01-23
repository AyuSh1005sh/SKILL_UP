
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>

using namespace std;
void permute(string s,int i,vector<string>&ans){
    if(i==(s.length()-1)){
        ans.push_back(s);
        return;
    }
    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        permute(s,i+1,ans);
        swap(s[j],s[i]);
    }
}
int main()
{
    string s;
    cin>>s;
    //int i=0;//
    vector<string> ans;
    permute(s,0,ans);
    //cout<<ans.size()<<endl;
    set<string> s1;
    for(int j=0;j<ans.size();j++){
        s1.insert(ans[j]);
    }
    cout<<s1.size()<<endl;
    for(auto x:s1){
        cout<<x<<endl;
    }
    return 0;
}
