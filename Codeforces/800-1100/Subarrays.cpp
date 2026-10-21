#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t; 
    cin >> t;
    
    while (t > 0){
        
        long long n, k, cnt = 0;
        cin >> n >> k;
        
        vector<long long> v1(n + 1, 0), v2(k, 0);
        
        for (long long i = 0; i < n; ++i){
            
            long long temp; 
            cin >> temp;
            v1[i + 1] = (v1[i] + temp) % k;
        }
        
        for (long long i = k + 1; i <= n; ++i) {
            
            if (i - k - 1 >= 0) ++v2[v1[i - k - 1]];
            cnt += v2[v1[i]];
        }
        
        cout << cnt << '\n';
        --t;
    }
    return 0;
}
