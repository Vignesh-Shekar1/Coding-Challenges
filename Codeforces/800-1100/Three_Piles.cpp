#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t > 0){
        
        long long a, b, c;
        cin >> a >> b >> c;
        long long maxi = max(abs(a-b), abs(a-b+c));
        cout << maxi << '\n';
        --t;
    }
    return 0;
}
