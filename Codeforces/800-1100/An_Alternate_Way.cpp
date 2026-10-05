#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long t; 
    cin >> t;
    
    while (t > 0){
        
        long long n;
        cin >> n;
        
        vector<long long> v1(n), v2(n);
        for (long long i = 1; i <= 2; ++i){
            for (long long j = 0; j < n; ++j){
                if (i == 1){
                    cin >> v1[j];
                }
                else cin >> v2[j];
            }
        }
        for (long long i = n-1; i > 0; --i){
          if (v1[i] > v2[i]) v1[i-1] += v1[i] - v2[i];   
          else v1[i] += v2[i] - v1[i]; 
        }
        
        if (v1[0] <= v2[0]) cout << "YES\n";
        else cout << "NO\n";
        
        --t;
    }
}
