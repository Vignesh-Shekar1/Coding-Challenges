class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int start = 0, end = nums.size()-1, right = -1, left = -1;
        vector<int> v;
        while (start <= end){
            int mid = start + (end - start)/2;
            if (nums[mid] > target) end = mid - 1;
            else if (nums[mid] < target) start = mid + 1;
            else {
                right = mid;
                start = mid + 1;
            }
        }
        start = 0, end = nums.size() - 1;
        while (start <= end){
            int mid = start + (end - start)/2;
            if (nums[mid] > target) end = mid - 1;
            else if (nums[mid] < target) start = mid + 1;
            else {
                left = mid;
                end = mid - 1;
            }
        }
        if (left != -1)
            for (int i = 0; i <= right - left; ++i){
                v.push_back(i+left);
            }
        return v;
    }
};
