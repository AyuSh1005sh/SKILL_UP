void find(vector<string>&a,int index,string curr,vector<string>&ans){
    if(index==a.size()){
        ans.push_back(curr);
        return;
    }
    int temp=a[index].size();
    
    for(int i=0;i<temp;i++){
        curr+=a[index][i];
        find(a,index+1,curr,ans);
        curr.pop_back();
    }
    
}

vector<string> Solution::specialStrings(vector<string> &A) {
    string h="";
    vector<string>ans;
    find(A,0,h,ans);
    return ans;
}
