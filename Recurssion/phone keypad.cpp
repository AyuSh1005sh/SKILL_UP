void solve(string A,int index,string curr,string mapping[],vector<string>&ans){
    if(index>=A.length()){
        ans.push_back(curr);
        return;
    }
    int number= A[index]-'0';
    string value = mapping[number];
    for(int i=0;i<value.length();i++){
        curr.push_back(value[i]);
        solve(A,index+1,curr,mapping,ans);
        curr.pop_back();
    }
}


vector<string> Solution::letterCombinations(string A) {
    string mapping[10] = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string curr="";
    
    vector<string> ans;
    int index=0;
    if(A.length()==0){
        
        return ans;
    }
    // if(A=="0"){
    //     ans.push_back("0");
    //     return ans;
    // }
    // if(A=="1"){
    //     ans.push_back("1");
    //     return ans;
    // }
    
    solve(A,index,curr,mapping,ans);
    return ans;
}
