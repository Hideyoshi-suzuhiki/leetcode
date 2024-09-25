/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> Vector(numRows);
        for(int i = 0;i < numRows;++i)
        {
            Vector[i].resize(i + 1);
            Vector[i][0] = 1;
            Vector[i][i] = 1;
        }
        for(int i = 2;i < numRows;++i)
        {
            for(int j = 1;j < i;++j)
            {
                Vector[i][j] = (Vector[i - 1][j - 1] + Vector[i - 1][j]);
            }
        }

        return Vector;
    }
};
// @lc code=end

