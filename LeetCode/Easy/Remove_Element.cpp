class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return 0;
        if (nums.size() == 1 && nums[0] == val) return 0;
        else if (nums.size() == 1 && nums[0] != val) return 1;

        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] == val) {
                while (left <= right && nums[right] == val)
                    --right;

                if (left > right)
                    break;

                swap(nums[left], nums[right]);
                --right;
            }              
            else ++left;
        }
        return left;
    }
};
