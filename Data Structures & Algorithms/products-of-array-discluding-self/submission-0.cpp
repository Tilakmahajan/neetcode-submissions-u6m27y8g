class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>result(n,1);
        for(int i=1;i<nums.size();i++){
            result[i]= result[i-1]*nums[i-1];
        }
        int count =1;
        for(int i =nums.size()-1;i>=0;i--){
            result[i] = result[i]*count;
            count = count*nums[i]; 
        }
        return result;
    }
};
