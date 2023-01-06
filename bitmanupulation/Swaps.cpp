#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			arr.push_back(x);
		}
		vector<int>odd;
		vector<int>even;
		vector<int>ans;
		for(int i=0;i<n;i++){
			if(arr[i]&1){
				odd.push_back(arr[i]);
			}
			else{
				even.push_back(arr[i]);
			}
		}
		sort(odd.begin(),odd.end());
		sort(even.begin(),even.end());
		int i=0,j=0;
		while(i<odd.size() && j<even.size()){
			if(odd[i]<even[j]){
				ans.push_back(odd[i]);
				i++;
			}
			else if(even[j]<odd[i]){
				ans.push_back(even[j]);
				j++;
			}
		}
		while(j<even.size()){
			ans.push_back(even[j]);
			j++;
		}
		while(i<odd.size()){
			ans.push_back(odd[i]);
			i++;
		}
		for(int i=0;i<n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}