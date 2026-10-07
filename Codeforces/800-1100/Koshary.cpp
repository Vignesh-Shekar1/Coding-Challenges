#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
  ios::sync_with_stdio(false);
  cin.tie(0);
    
  long long t; 
  cin >> t;
    
  while (t > 0){
        
      long long x, y;
      cin >> x >> y;
      if(x % 2 == 1 && y % 2 == 1) cout <<"NO\n";
      else cout << "YES\n";
    
      --t;
    }
  return 0;
}
