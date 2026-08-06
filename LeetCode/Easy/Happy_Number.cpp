class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        int sum = 0;
        while (sum != 1){
            sum = 0;
            while (n > 0){
                sum += (n%10)*(n%10);
                n/=10;
            }
            if (set.contains(sum)) return false;
            set.insert(sum);
            n = sum; 
        }
        return true;
    }
};
