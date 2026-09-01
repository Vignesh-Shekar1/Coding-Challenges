#include <bits/stdc++.h>
using namespace std;
 
int func(int n , int x, int y, int z){
    
    int hrs1, hrs2;
    
    if (n % (x+y) == 0) hrs1 = n / (x+y);
    else hrs1 = n / (x+y) + 1;
    
    y *= 10, n -= x*z, hrs2 = z;
    if (n <= 0) return hrs1;
    if (n % (x + y) == 0) hrs2 += n / (x+y);
    else hrs2 += n / (x+y) + 1;
    
    return min(hrs1, hrs2);
}
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
	
	int t;
	cin >> t;
	
	while (t > 0){
	    int n, x, y, z;
	    cin >> n;
	    cin >> x;
	    cin >> y;
	    cin >> z;
	    cout << func(n , x , y, z) << '\n';
	    --t;
	}
 
}
