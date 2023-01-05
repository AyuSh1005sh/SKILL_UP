
// Online IDE - Code Editor, Compiler, Interpreter
#define ll long long 
#include<bits/stdc++.h>

using namespace std;

int main()
{
    
        int t;
        cin>>t;
        while(t--){
            int n,m,k;
            cin>>n>>m>>k;
            string s1,s2;
            cin>>s1>>s2;
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            string s;
            int i=0,j=0,p=0,q=0;
           
            while(i<n and j<m){
                if((s1[i]<s2[j] && p<k)||q==k){
                    s+=s1[i];
                    i++;
                    p++;
                    q=0;
                    
                    
                }
                else{
                    s+=s2[j];
                    j++;
                    q++;
                    p=0;
                     
                }
                
            }
            cout<<s<<endl;
        }
        
    return 0;
}
