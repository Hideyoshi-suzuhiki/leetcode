/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
#include<bits/stdc++.h>
#include<string>
using namespace std;
class Solution {
public:
    int romanToInt(string s) 
    {
        int ans = 0;
        for(int i = 0;i < s.size();++i)
        {

            switch(s[i])
            {
                case 'I':
                ans += 1;
                break;
                                case 'V':
                ans += 5;
                break;
                                case 'X':
                ans += 10;
                break;
                                case 'L':
                ans += 50;
                break;
                                case 'C':
                ans += 100;
                break;
                                case 'D':
                ans += 500;
                break;
                                case 'M':
                ans += 1000;
                break;

            }
                        if(s[i] == 'I' && s[i + 1] == 'V')
            {
                i++;
                ans += 3;
            }
                        if(s[i] == 'I' && s[i + 1] == 'X')
            {
                i++;
                ans += 8;
            }
                        if(s[i] == 'X' && s[i + 1] == 'L')
            {
                i++;
                ans += 30;
            }
                        if(s[i] == 'X' && s[i + 1] == 'C')
            {
                i++;
                ans += 80;
            }
                        if(s[i] == 'C' && s[i + 1] == 'D')
            {
                i++;
                ans += 300;
            }
                        if(s[i] == 'C' && s[i + 1] == 'M')
            {
                i++;
                ans += 800;
            }

        }
        return ans;
    }
};
// @lc code=end

