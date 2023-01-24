#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[10]={0};
    int k=0,j=9;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            bool flag = true;
            if(arr[k]==0){
                flag=false;
            arr[k]=1;
            k++;
            }
            else{
                while(arr[k]==1 and k<=9){
                    k++;
                }
            }
            if(arr[k]==0 and flag){
            arr[k]=1;
            k++;
            }
        }
        else if(s[i]=='R'){
            bool flag= true;
            if(arr[j]==0){
            arr[j]=1;
            j--;
            flag=false;
            }
            else{
                while(arr[j]==1 and j>=0){
                    j--;
                }
            }
            if(arr[j]==0 and flag){
            arr[j]=1;
            j--;
            }
        }
        else{
            arr[s[i]-'0']=0;
            k=min(s[i]-'0',k);
            j=max(s[i]-'0',j);
        }
    }
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}