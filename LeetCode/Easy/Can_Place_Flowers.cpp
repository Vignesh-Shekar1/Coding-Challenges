class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (flowerbed.size() == 1) {
            if (flowerbed[0] == 0) {
                return n <= 1;
            }
            return n == 0;
        }
        int count = 0;
        for (int i = 0; i < flowerbed.size(); ++i){
            if (flowerbed[i] == 0 && i == flowerbed.size() - 1){
                if (flowerbed[i-1] != 1){
                    ++count;
                    flowerbed[i] = 1;
                }
            }
            else if (flowerbed[i] == 0 && i == 0){
                if (flowerbed[i+1] != 1){
                    ++count;
                    flowerbed[i] = 1;
                }
            }
            else{
               if (flowerbed[i] == 0 && flowerbed[i-1] != 1 && flowerbed[i+1] != 1){
                    ++count;
                    flowerbed[i] = 1;
                }
            }
        }
        if (n <= count) return 1;
        return 0;
    }
};
