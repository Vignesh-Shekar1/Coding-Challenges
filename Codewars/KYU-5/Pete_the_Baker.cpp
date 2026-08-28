#include <bits/stdc++.h>
using namespace std;

using Ingredients = unordered_map<string, int>;

int cakes(const Ingredients& recipe, const Ingredients& available) {
  int ans = INT_MAX;
  for (pair<string, int> p: recipe){
    if (available.find(p.first) == available.end()) return 0;
    if (ans > available.at(p.first)/p.second) ans = available.at(p.first)/p.second;
    
  }
  
  return ans;
}
