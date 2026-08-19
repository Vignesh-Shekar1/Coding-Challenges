#include <vector>
#include <cmath>
using namespace std;


int findLongest(const vector<int>& numbers) {
  int max = -1, num = 0;
  for (int x: numbers){
    int leng = log10(x);
    if (leng > max) max = leng, num  = x;
    }
  return num;
}
