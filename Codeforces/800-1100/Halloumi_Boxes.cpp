#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    long long t;
    cin >> t;
    while (t > 0){
        long long n,l;
        cin >> n;
        cin >> l;
        if (l > 1) {
            long long temp;
            cout << "YES\n";
            for (long long i = 0; i < n; ++i) cin >> temp;
        }
       else {
            long long prev, current;
            bool temp = true;
            cin >> prev;
            for (long long i = 1; i < n; ++i) {
                cin >> current;
                if (prev > current) temp = false;
                prev = current;
            }
            if (!temp) cout << "NO\n";
            else cout << "YES\n";
        }
        
        --t;
    }
  
