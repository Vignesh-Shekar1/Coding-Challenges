class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_len = 0, count = 0; 
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == 1) count += 1;
            else count = 0;
            if (count > max_len) max_len = count;
        }
        return max_len;
    }
};
