class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if (nums.size() < 2) return nums;
        int cand1 = 0, count1 = 0, cand2 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == cand1) ++count1;
            else if (nums[i] == cand2) ++count2;
            else if(count1 == 0){
                cand1 = nums[i];
                ++count1;
            }
            else if (count2 == 0){
                cand2 = nums[i];
                ++count2;
            }
            else{
                --count1, --count2;
            }
        }
        count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); ++i){
            if (nums[i] == cand1) ++ count1;
            else if (nums[i] == cand2) ++count2;
        }
        if (count1 > nums.size()/3 && count2 > nums.size()/3 && cand1 != cand2) return {cand1,cand2};
        else if (count1 > nums.size()/3) return {cand1};
        else if (count2 > nums.size()/3) return {cand2};
        else return {};
    }
};
