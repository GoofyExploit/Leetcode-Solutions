// Last updated: 1/3/2026, 6:25:42 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> arr1;
        int count = 0;
        sort(arr.begin(),arr.end());
        set<int> unique;
        for(int i = 0; i < arr.size(); i++){
            unique.insert(arr[i]);
        }
        for(int val : unique){
            for(int i = 0; i < arr.size(); i++){
                if(arr[i] == val){
                    count++;
                }
            }
            arr1.push_back(count);
            count = 0;
        }
        set<int> freq;
        sort(arr1.begin(),arr1.end());
        for(int i = 0; i < arr1.size()-1; i++){
            if(arr1[i] == arr1[i+1]){
                return false;
            }
        }
        return true;
    }
};