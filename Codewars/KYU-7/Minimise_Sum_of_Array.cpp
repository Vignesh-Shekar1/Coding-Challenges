#include <vector>
#include <algorithm>
using namespace std;

int minSum(const std::vector<int> &passed){
  vector<int> passed2 = passed;
  sort(passed2.begin(), passed2.end());
  int left = 0;
  int right = passed2.size() - 1;
  int sum = 0;
  while (left < right){
    sum += (passed2[left]*passed2[right]);
    ++left; 
    --right;
  }
    return sum;
}
