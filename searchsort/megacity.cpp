
// Online IDE - Code Editor, Compiler, Interpreter
#define ll long long 
#include<bits/stdc++.h>

using namespace std;

 long double  dist(int x,int y){
     long long  int  r = pow(x,2)+pow(y,2);
    return sqrtl((long double)r);
}
int main()
{
        int n,s;
        cin>>n>>s;
        
        vector<pair< long double,int>>v;
        for(int i=0;i<n;i++){
            
            int x,y,p;
            cin>>x>>y>>p;
            v.push_back({dist(x,y),p});
        }
        long double ans=0;
    
        
        if(s==pow(10,6)){
            cout<<0<<endl;
        }
        else{
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(s>=pow(10,6)){
                break;
            }
            s+=v[i].second;
            ans=v[i].first;
        }
        if( s<1000000){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        }
    return 0;
}

