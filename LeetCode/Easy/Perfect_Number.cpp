class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) return false;
        int root = pow(num, 0.5), sum = 1;
        for (int i = 2; i <= root; ++i){
            if(num % i == 0 && num / i != i) sum += (num / i) + i;
            else if (num % i == 0) sum += i;
        }
        return (sum == num);
    }
};
