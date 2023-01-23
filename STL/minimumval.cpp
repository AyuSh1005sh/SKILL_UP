class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prfsum[nums.size()];
        prfsum[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            prfsum[i]=prfsum[i-1]+nums[i];
        }
        int min1 = prfsum[0];
        for(int i=0;i<nums.size();i++){
            if(prfsum[i]<min1){
                min1=prfsum[i];
            }
        }
        if(min1<1){
            return 1 - min1;
        }
    
            return 1;
    
    }
};