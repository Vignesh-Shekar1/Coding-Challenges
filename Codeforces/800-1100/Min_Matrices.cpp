include <bits/stdc++.h>
using namespace std;
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t > 0){
        
        int n, k;
        cin >> n >> k;
        vector<vector<int>> v(n, vector<int>(n));
        
        if ((k < n) || (k > 2*n - 1)) {
            cout << -1 << '\n';
            --t;
            continue;
        }
        else {
            
            int x = 1;
            for (int i = 0; i < n; ++i){
                for (int j = 0; j < n; ++j){
                    v[i][j] = x;
                    ++x;
                }
            }
            for (int i = 1, j = 1;k < 2*n - 1; ++k){
                swap(v[0][j], v[i][j]);
                ++i;
                ++j;
            }
        }
        for (int i = 0; i < n; ++i){
                for (int j = 0; j < n; ++j){
                    cout << v[i][j] << ' ';
                }
                cout << '\n';
            }
        --t;
    }
}
