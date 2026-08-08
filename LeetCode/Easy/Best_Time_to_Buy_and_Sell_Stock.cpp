class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 1) return 0;
        int left = 0, right = 1, max = 0; 
        while (right < prices.size()){
            if (prices[left] > prices[right]) left = right; 
            else{
                if (prices[right] - prices[left] > max) max = prices[right] - prices[left];
            }
            ++right;
        }
        return max;
    }
};
