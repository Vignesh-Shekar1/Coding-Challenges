class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        int start = 2, ans = 1,end;
        if (x/2 > 46340) end = 46340;
        else end = x/2;
        while (start <= end){
            int mid = start - (start-end)/2;
            int sq = x/mid;
            if (sq == mid) return mid; 
            if (sq < mid) end = mid - 1;
            if (sq > mid){
                ans = mid;
                start = mid + 1;
            } 
        }
        return ans;
    } 
};
