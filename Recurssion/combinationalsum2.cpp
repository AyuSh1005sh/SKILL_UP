void solve(vector<int> &A, int B, int index, vector<int> &comb, 
    set<vector<int>> &ans) {
    // base case
    if (B == 0) {
        ans.insert(comb);
        return;
    }
    
    if (B < 0 || index >= A.size()) return;
    // 2 choices, either include the current element or exclude.
    //include
    comb.push_back(A[index]);
    solve(A, B - A[index], index+1 , comb, ans);
    comb.pop_back(); // backtrack
    //exclude
    solve(A, B, index + 1, comb, ans);}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
     set<vector<int>> ans;
     vector<int> comb;
     solve(A, B, 0, comb, ans);
     vector<vector<int>> result;
     for (auto it: ans) {
        vector<int> t;
        for (auto i: it) {
            t.push_back(i);
        }
        result.push_back(t);
    }
    return result;
}