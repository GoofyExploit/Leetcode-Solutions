class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftMax = 0, rightMax = 0;
        int i = 0, j = n-1, maxWater = 0;
        while(i < j){
            leftMax = max(leftMax, height[i]);
            rightMax = max(rightMax, height[j]);
            int currWater = 0;
            if(leftMax < rightMax){
                currWater = leftMax - height[i];
                i++;
            }else{
                currWater = rightMax - height[j];
                j--;
            }
            maxWater += currWater;
        }
        return maxWater;
    }
};