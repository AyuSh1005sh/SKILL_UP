// int toint(string s){
//     int ans=0;
//     for(int i=s.length();i>=0;i--){
//         ans = ans*10+s[i];
//     }
//     return ans;
// }
// vector<int> arr(int a){
//     vector<int>ans;
//     while(a>0){
//         ans.push_back(a%10);
//         a/10;
//     }
//     return ans;
// }
vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int>>ans;
    sort(A.begin(),A.end());
    //int num=0;
    // for(int i=0;i<A.size();i++){
    //     num  = num*10 +A[i];
    // }
    //string s= to_string(num);
    ans.push_back(A);
    while(next_permutation(A.begin(),A.end())){
        //int x=toint(s);
        
        ans.push_back(A);
        
    }
    return ans;
}
