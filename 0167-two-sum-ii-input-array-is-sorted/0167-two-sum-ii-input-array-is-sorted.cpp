class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n = numbers.size();
        int i = 0, j = n-1, sum = 0;
        while(i < j){
            sum = numbers[i] + numbers[j];
            if(sum == target){
                res.push_back(i+1);
                res.push_back(j+1);
                i++;
                j--;
            }else if(sum > target) j--;
            else i++;
        }
        return res;
    }
};