class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> dict; 
        for (int i = 0; i < nums.size(); ++i){
            int rem = target - nums[i]; 
            if (dict.find(rem) != dict.end()) return {dict[rem], i};
            dict[nums[i]] = i;
        }
        return {0,0};
    }
};
