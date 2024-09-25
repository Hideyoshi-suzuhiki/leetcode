/*
 * @lc app=leetcode.cn id=611 lang=cpp
 *
 * [611] 有效三角形的个数
 */

// @lc code=start
#include<vector>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();++i)
        {
            for(int j = i + 1;j < nums.size();++j)
            {
                for(int k = j + 1;k < nums.size();++k)
                {
                    if(!ist(nums[i],nums[j],nums[k]))
                    break;
                    if(ist(nums[i],nums[j],nums[k]))
                    ans++;
                }
            }
        }
        return ans;
    }

    bool ist(int a,int b,int c)
    {
        if(a + b > c && b + c > a && a + c > b)
        return true;
        else
        return false;
    }
};
// @lc code=end

