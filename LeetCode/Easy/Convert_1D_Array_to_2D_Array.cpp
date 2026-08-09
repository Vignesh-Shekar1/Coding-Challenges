class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n) return {};
        vector<vector<int>> vec(m);
        for (int i = 0; i < m; ++i) {
            vector<int> temp(n);
            for (int j = 0; j < n; ++j) {
                temp[j] = original[i*n + j];
            }
            vec[i] = temp;
        }
        return vec;
    }
};
