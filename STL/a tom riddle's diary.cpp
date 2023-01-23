
// Online IDE - Code Editor, Compiler, Interpreter

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    vector<string> ans;
    
    for(int i=n-1;i>0;i--){
        bool flag =true;
        for(int j=i-1;j>=0;j--){
            if(v[i]==v[j]){
                flag=false;
                ans.push_back("YES");
                break;
            }
        }
        if(flag){
            ans.push_back("NO");
        }
    }
    ans.push_back("NO");
    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<endl;
    }
    return 0;
}
