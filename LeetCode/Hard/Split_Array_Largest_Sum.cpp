class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int start = *max_element(nums.begin(), nums.end()), end = accumulate(nums.begin(), nums.end(), 0), ans = -1;
        while (start <= end){
            int mid = (end + start)/2;
            int sum = 0, count = 1;
            
            for (int i = 0; i < nums.size(); ++i){    
                sum += nums[i];
                if (sum > mid){
                    ++count;
                    sum = nums[i];
                }
            }
            if (count <= k){
                end = mid - 1;
                ans = mid;
            }
            else start = mid + 1;
        }
        return ans;
    }
};
