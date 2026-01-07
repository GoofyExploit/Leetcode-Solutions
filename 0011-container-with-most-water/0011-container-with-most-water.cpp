class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1, maxWater = 0;
        while(i < j){
            int h = min(height[i], height[j]);
            int width = j - i;
            int area = h * width;
            int currWater = area;
            maxWater = max(currWater, maxWater);
            if(height[i] < height[j]) i++;
            else j--;
        }
        return maxWater;
    }
};