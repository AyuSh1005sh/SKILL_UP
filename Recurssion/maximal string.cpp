


// string Solution::solve(string A, int B) {
// }
string ans;
void calculate_all_cases(string &str, int k){
    if(k==0){return;}
    for(int i=0;i<str.length();i++){
        for(int j=i+1;j<str.length();j++){
            if(str[j]>str[i]){
                swap(str[i],str[j]);
                ans = max(ans,str);
                calculate_all_cases(str,k-1);
                swap(str[i],str[j]);
            }
        }
    }
}
string Solution::solve(string str, int k) 
{ 
    ans=str;
    calculate_all_cases(str,k);
    return ans;
}  
