class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int remaing = target -nums[i];
            if(mp.find(remaing)!=mp.end()){
                return {mp[remaing], i};
            }
            mp[nums[i]]=i;

        }
        return {};
    }
};
