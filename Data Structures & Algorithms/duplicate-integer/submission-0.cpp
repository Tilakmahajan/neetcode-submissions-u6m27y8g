class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0,j=i+1;j<nums.size();i++,j++){
            if(nums[i]==nums[j]){
                return true;
            }
        }
        return false;
    }
};