class Solution {
public:
    bool judgeSquareSum(int c) {
        int rt = sqrt(c);
        int start  = 0, end = rt;
        while (start <= end){
            if (end*end == c - start*start) return true;
            else if (end*end > c - start*start) --end;
            else ++start;  
        }
        return false;
    }
};
