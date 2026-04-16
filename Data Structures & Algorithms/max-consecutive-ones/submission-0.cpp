class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum =0;
        int maxSum = INT_MIN;

        for(int i=0;i<nums.size();i++){
            sum +=nums[i];
            maxSum= max(sum,maxSum);

            if(nums[i]==0){
                sum =0;
            }

        }
        return maxSum;
    }
};