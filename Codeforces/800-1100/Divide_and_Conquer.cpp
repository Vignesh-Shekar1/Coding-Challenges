#include <bits/stdc++.h>
using namespace std;
 
string dac(int num, int target){
    if (num % target == 0) return "YES";
    return "NO";
}
 
int main() {
	ios::sync_with_stdio(false); 
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t > 0){
	    int num , target; 
	    cin>>num;
	    cin>>target;
	    cout<<dac(num,target)<<'\n';
	    --t;
	}
 
}
