class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maximum = INT_MIN, sum = 0;
        for (int num: nums){
            sum = max(sum + num, num);
            maximum = max(maximum, sum);
        }
        return maximum;
    }
};
