/*
 * @lc app=leetcode.cn id=2848 lang=cpp
 *
 * [2848] 与车相交的点
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums)
    {
        int num[110] = {0}, ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int start = nums[i][0];
            int end = nums[i][1];
            for (int j = start; j <= end; j++)
            {
                num[j]++;
            }
        }
        for (int i = 0; i < 110; i++)
        {
            if (num[i])
                ans++;
        }
        return ans;
    }
};
// @lc code=end

