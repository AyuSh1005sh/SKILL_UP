#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    
    sort(arr,arr+n);
    int ans=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans++;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}