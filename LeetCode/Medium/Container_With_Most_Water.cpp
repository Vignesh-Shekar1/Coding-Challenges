class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, max = 0;
        while (left < right){
            if (height[left] <= height[right]){
                int area = height[left]*(right-left);
                if (area > max) max = area;
                ++left;
            }
            else {
                int area = height[right]*(right-left);
                if (area > max) max = area;
                --right;
            }
        }
        return max;
    }
};
