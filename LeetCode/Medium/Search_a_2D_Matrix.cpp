class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0, end = matrix.size() - 1, sz = matrix[0].size();
        while (start <= end){
            int mid = start + (end - start)/2;
            int num1 = matrix[mid][0], num2 = matrix[mid][sz - 1];
            if (num1 <= target && num2 >= target){
                int start1 = 0, end1 = sz - 1;
                while (start1 <= end1){
                    int mid1 = start1 + (end1 - start1)/2;
                    if (matrix[mid][mid1] > target) end1 = mid1 - 1;
                    else if (matrix[mid][mid1] < target) start1 = mid1 + 1;
                    else return true;
                }
                return false;
            }
            else if (num1 > target) end = mid - 1;
            else start = mid + 1; 
        }
        return false;
    }
};
