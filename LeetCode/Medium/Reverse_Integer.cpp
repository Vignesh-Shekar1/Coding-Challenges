class Solution {
public:
    int reverse(int num) {
        int new_num=0;
        while (num != 0){
            int rem = num%10;
            num /= 10;
            if (new_num > INT_MAX/10 || new_num < INT_MIN/10) return 0;
            new_num = new_num*10 + rem;
        }
        return new_num;
    }
};
