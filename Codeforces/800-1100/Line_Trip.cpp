#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t; 
    while (t > 0){
        int n,x;
        cin >> n >> x;
        int prev, current, maxi;
        cin >> prev;
        maxi = prev;
        current = prev;
        for (int i = 1; i < n; ++i){
            cin >> current;
            maxi = max(maxi, current-prev);
            prev = current;
        }
        maxi = max(maxi, 2*(x-current));
        cout << maxi << '\n';
        --t;
    }
  return 0;
 
}
