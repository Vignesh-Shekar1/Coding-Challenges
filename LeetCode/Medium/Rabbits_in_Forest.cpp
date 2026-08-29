class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> dict; 
        for (int i = 0; i < answers.size(); ++i){
            if (dict.find(answers[i]) == dict.end()) dict[answers[i]] = 1;
            else dict[answers[i]] += 1;
        }
        int count = 0;
        for (const pair<const int , int> element : dict) {
            int num = element.first, freq = element.second;
            if (num == 0) count += freq;
            else if (freq < num + 1) count += num + 1;
            else if (freq % (num + 1) == 0) count += freq;
            else count += (freq/(num + 1) + 1)*(num+1);
        }
        return count;
    }
};
