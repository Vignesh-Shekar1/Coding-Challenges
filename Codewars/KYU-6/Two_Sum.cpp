#include <bits/stdc++.h>
using namespace std;

pair<size_t, size_t> two_sum(vector<int> numbers, int target) {
  unordered_map<int, int> dict;
  for ( int i = 0; i < numbers.size(); ++i){
    int diff = target - numbers[i]; 
    if (dict.find(diff) != dict.end()) return {i , dict[diff]};
    dict[numbers[i]] = i;
  }
  
  return {0, 0};
}
