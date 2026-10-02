#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t > 0) {
        
        int n, x1, x2, k;
        cin >> n >> x1 >> x2 >> k;
        
        if (n > 3) {
            int mini = min(abs(x1-x2), n - abs(x1-x2));
            cout << mini + k << '\n';
        }
        else cout << 1 << '\n';
        --t;
     }
    return 0;
}
