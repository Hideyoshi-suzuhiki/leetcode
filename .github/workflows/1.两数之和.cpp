/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
#include<bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> VECTOR;
        for(int i = 0;i < nums.size();++i)
        {
            for(int j = i + 1;j < nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    VECTOR.push_back(i);
                    VECTOR.push_back(j);
                }
                
            }
        }
        return VECTOR;

    }
};
// @lc code=end

