class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int left = 0, right = 1;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] > 0) {
                ans[left] = nums[i];
                left += 2;
            }
            else{
                ans[right] = nums[i];
                right += 2;
            }
        }
        return ans;
    }
};
