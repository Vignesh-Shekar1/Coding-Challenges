#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t > 0) {
        
        long long n, a, b, mini1, mini2;
        cin >> n >> a >> b;
        mini1 = min({(n / 3) * b + (n % 3) * a, n * a, ((n + 2) / 3) * b});
        cout << mini1 << '\n';
        
        --t;
     }
    return 0;
}
