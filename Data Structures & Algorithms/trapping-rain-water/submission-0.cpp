class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        int maxwater = 0;

        leftmax[0] = height[0];
        rightmax[n - 1] = height[n - 1];  
        for (int i= 1; i < n; i++) {
            leftmax[i] =max(height[i],leftmax[i - 1]);
        }

        for (int j = n - 2; j >= 0; j--) {
            rightmax[j] =max(height[j],rightmax[j + 1]);
        }
        for (int i=0; i < n; i++) {
            int sum =min(leftmax[i],rightmax[i]) -height[i];
            maxwater += sum;
        }

        return maxwater;
    }
};