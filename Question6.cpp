#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int rob(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) {
        return nums[0];
    }
    
    auto rob_helper = [&](vector<int>& nums) {
    vector<int> dp1(n, 0);
    vector<int> dp2(n, 0);
        dp1[0] = nums[0];
        dp1[1] =max(nums[0], nums[1]);
        for (int i = 2; i < n - 1; i++) {
            dp1[i] =max(dp1[i-1], dp1[i-2] + nums[i]);
        }
        dp2[1] = nums[1];
        dp2[2] =max(nums[1], nums[2]);
        for (int i = 3; i < n; i++) {
            dp2[i] =max(dp2[i-1], dp2[i-2] + nums[i]);
        }
        
        return max(dp1[n-2], dp2[n-1]);
    };
    
    return rob_helper(nums);
}

int main() {
    vector<int> nums = {2, 3, 2};
    cout << rob(nums) <<endl;  // Output: 3
    
    nums = {1, 2, 3, 1};
    cout << rob(nums) <<  endl;  // Output: 4
    
    nums = {1, 2, 3};
    cout << rob(nums) <<   endl;  // Output: 3
    
    return 0;
}
