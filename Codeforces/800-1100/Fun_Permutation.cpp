#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    while (t > 0) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin>>v[i];
        
        if (n == 2){
            for (int i = 0; i < n; ++i) {
                if (v[i] == 1) cout<<2<<' ';
                else cout<<1<<' ';
            }
        }
        else {
            for (int i = 0; i < n; ++i) {
                if (v[i] == n) cout<<n<<' ';
                else cout<<n - v[i]<<' ';
            }
        }
        --t; 
        cout<<'\n';
    }
}
