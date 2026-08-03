class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false; 
        int num = x, rev_num = 0;
        while (num > 0){
            if (rev_num > INT_MAX/10) return false;
            rev_num = rev_num*10 + num%10; 
            num /= 10;
        }
        if (rev_num == x) return true;
        return false;
    }
};
