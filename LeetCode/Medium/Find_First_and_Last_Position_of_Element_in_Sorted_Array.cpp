class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        int left = -1, right = -1; 
        if (nums.empty()) return {-1,-1};
        while (start <= end) {
            int mid = start - ((start-end)/2);
            if (nums[mid] == target){
                left = mid; 
                end = mid-1; 
                }
            else if (nums[mid] > target) end = mid-1;
            else start = mid + 1;
        }
        if (left == -1) return {-1, -1};
        start = left, end = nums.size()-1;
        while (start <= end) {
            int mid = start - ((start-end)/2);
            if (nums[mid] == target){
                right = mid; 
                start = mid+1; 
                } 
            else if (nums[mid] > target) end = mid-1;
            else start = mid + 1;
        }
        return {left,right};
    }
};
