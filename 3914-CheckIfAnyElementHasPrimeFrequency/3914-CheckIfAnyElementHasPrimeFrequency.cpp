// Last updated: 1/3/2026, 6:25:23 PM
bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        map<int, int> freq;
        for(auto cnt: nums){
            freq[cnt]++;
        }
        for(auto pair : freq){
            if(isPrime(pair.second)){
                return true;
            }
        }
        return false;
    }
};