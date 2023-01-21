void subset(vector<int>&A,int i,vector<int>curr,vector<vector<int>> &ans){
    if(i>=A.size()){
        ans.push_back(curr);
        return;
    }
    subset(A,i+1,curr,ans);
    curr.push_back(A[i]);
    subset(A,i+1,curr,ans);   
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    vector<int>curr;
    int i=0;
    subset(A,i,curr,ans);
    sort(ans.begin(),ans.end());
    return ans;
}