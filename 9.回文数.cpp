/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include<math.h>
using namespace std;
using ll = long long;
class Solution {
public:
    bool isPalindrome(ll x) {
        if(x < 0)
        return false;
        ll res = 0,xcopy = x,m = 0;
        for(ll i = 1;i <= x;i*=10)
        {
            m++;
        }
        for(ll i = 1;i <= x;i*=10)
        {          
            res += ((xcopy % 10) * (pow(10,m - 1) / i));
            xcopy /= 10;
        }
        return res == x;
    }
};
// @lc code=end
