class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int end = *max_element(piles.begin(), piles.end()), start = 1;
        while (start <= end){
            int mid = start + (end - start) / 2;
            int count = 0;
            for (int i = 0; i < piles.size(); ++i){
                if (piles[i] % mid == 0) count += piles[i]/mid;
                else count += piles[i]/mid + 1;
                if (count > h) break;
            }
            if (count <= h) end = mid - 1;
            else start = mid + 1;
        }
        return start;
    }
};
