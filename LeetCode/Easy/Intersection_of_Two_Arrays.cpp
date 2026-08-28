class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        vector<int> v;

        for (int num: nums2){
            if (set.contains(num)) {
                v.push_back(num);
                set.erase(num);
            }   
        }
        return v;
    }
};
