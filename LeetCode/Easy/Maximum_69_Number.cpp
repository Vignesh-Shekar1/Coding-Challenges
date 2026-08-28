class Solution {
public:
    int maximum69Number (int num) {
        int len = log10(num), sum = 0, count = 0, i = round(pow(10,len));
        while (i > 0){
            if ((num / i) % 10 == 6 && count < 1) {
                sum = sum*10 + 9;
                ++count;
            }
            else sum = sum*10 + (num/i) % 10;

            i /= 10;
        }
        return sum;
    }
};
