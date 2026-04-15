class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = INT_MIN;   
        int cursum = 0;

        for(int i = 0; i < nums.size(); i++){
            cursum += nums[i];
            sum = max(cursum, sum);

            if(cursum < 0){
                cursum = 0;
            }
        }

        return sum;
    }
};