class Solution {
public:
    int maxArea(vector<int>& height) {
        int water =0;
        int maxWater=0;
        int i=0,j=height.size()-1;
        while(i<j){
            water = min(height[i],height[j])*abs(i-j);
            maxWater =max(water,maxWater);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxWater;
    }
};