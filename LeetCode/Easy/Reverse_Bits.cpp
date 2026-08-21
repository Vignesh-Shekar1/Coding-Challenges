class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;
        for (int i = 0; i <= 31; ++i){
            int temp = (n >> i) & 1;
            ans = ans | (temp << 31-i);
        }
        return ans;
    }
};
