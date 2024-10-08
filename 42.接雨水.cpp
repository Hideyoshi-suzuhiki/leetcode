/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
            int l = 0, r = height.size()-1, level = 0, water = 0;
        while (l < r) 
        {
            int lower = height[height[l] < height[r] ? l++ : r--];
            level = max(level, lower);
            water += level - lower;
        }
        return water;
    }

};
// @lc code=end

