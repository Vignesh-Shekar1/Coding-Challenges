#include <bits/stdc++.h>
using namespace std;  

vector<int> xbonacci(vector<int> signature, int n) {
  int size = signature.size();
  
  if(size > n){
    signature.resize(n);
    return signature;
  }
  
  for (int i = size; i < n; ++i){
    int sum = 0;
    for (int j = i - size; j < i; ++j) sum += signature[j];
    signature.push_back(sum);
  }
  
  return signature;
}
