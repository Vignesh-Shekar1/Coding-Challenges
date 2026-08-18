class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = nums[0], count = 0;
        for(int i = 0; i < nums.size(); ++i){
            if (nums[i] == num) ++count;
            else --count;
            if (count == 0) num = nums[i], count = 1;
        }
        return num;
    }
};
