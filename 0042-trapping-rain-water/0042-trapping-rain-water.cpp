class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0, right = n-1, total = 0;
        int leftMax = 0, rightMax = 0;
        while(left < right){
           leftMax = max(leftMax, height[left]);
           rightMax = max(rightMax, height[right]);
           int currWater = 0;
           if(leftMax < rightMax){
            currWater = leftMax - height[left];
            left++;
           }else{
            currWater = rightMax - height[right];
            right--;
           }
            total += currWater;
        }
        return total;
    }
};