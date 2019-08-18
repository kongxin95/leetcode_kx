#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        int tmp = 0;
        vector<int> ans(2, 0);
        for (int i = 0; i < n; i++){
            tmp = target - nums[i];
            
            if (m.find(tmp) != m.end()){
                ans[0] = i;
                ans[1] = m[tmp];
                return ans;
            }
            m[nums[i]] = i;
        }
        return ans;
    }
};
