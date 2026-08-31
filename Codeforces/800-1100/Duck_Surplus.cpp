#include <bits/stdc++.h>
using namespace std;
 
long long ducksurplus(vector<int> & nums, int n){
    long long maxi = nums[0], curmax = nums[0];
    for (int i = 1; i < n; ++i){
        if (nums[i] < curmax){
            curmax += nums[i];
            maxi = max(curmax, maxi);
        }
        else {
            curmax = nums[i];
            maxi = max(curmax, maxi);
        }
    }
    return maxi;
}
 
int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t > 0) {
        
        int len;
        cin >> len;
        vector<int> nums(len);
 
        for (int i = 0; i < len; ++i){
            cin >> nums[i];
        }
        --t;
        cout<<ducksurplus(nums, len)<<'\n';
        
    }
 
}
