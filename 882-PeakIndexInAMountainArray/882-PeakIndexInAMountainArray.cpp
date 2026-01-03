// Last updated: 1/3/2026, 6:25:48 PM
class Solution {
    private:
        int search(vector<int>& arr, int n, int s, int e){
            if(s > e) return -1;
            int mid = s + (e-s)/2;
            int ans = -1;
            if(mid > 0 && mid < n-1 && arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid] < arr[mid+1]){
                return search(arr, n, mid+1, e);
            }else{
                return search(arr, n, s, mid-1);
            }
        }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        return search(arr, n, s, e);
    }
};