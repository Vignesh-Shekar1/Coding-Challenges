class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int leng = nums.size();
        k %= leng;
        if (k == 0) return; 
        reverse(nums.begin(), nums.end());          
        reverse(nums.begin(), nums.begin() + k);    
        reverse(nums.begin() + k, nums.end());      
    }
};
