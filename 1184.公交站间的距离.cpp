/*
 * @lc app=leetcode.cn id=1184 lang=cpp
 *
 * [1184] 公交站间的距离
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) 
    {
        int vecans = 0,ans = 0;
        for(int i = 0;i < distance.size();++i)
        {
            vecans += distance[i];
        } 
        for(int i = start;i < destination;++i)
        {
            ans += distance[i];
        }
        for(int i = destination;i < start;++i)
        {
            ans += distance[i];
        }
        return min(vecans - ans,ans);
    }
};
// @lc code=end

