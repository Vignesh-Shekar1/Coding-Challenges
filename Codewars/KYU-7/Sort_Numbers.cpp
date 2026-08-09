#include <vector>

std::vector<int> solution(std::vector<int> nums) {
  
  if (nums.empty()) return {}; 
  sort(nums.begin(), nums.end());
  return nums;
  
}
