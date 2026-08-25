class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count5 = 0, count10 = 0;
        for (int i = 0; i < bills.size(); ++i){
            int diff = bills[i] - 5;
            if (diff == 0) ++count5;
            else if (diff == 5 && count5 >= 1) --count5, ++count10;
            else if (diff == 15 && count10 >= 1 && count5 >= 1) --count5, --count10; 
            else if (diff == 15 && count5 >= 3) count5 -= 3;
            else return false;
        } 
        return true;
    }
};
