// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem5.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {

        int n=s.size();
        if(n<2) return s;

        vector<vector<int>> dp(n,vector<int>(n));
        int MaxSize=1;
        int begin=0;

        for(int j=1;j<n;j++){
            for(int i=0;i<j;i++){
                if(s[i]==s[j]){
                    if(j-i<3){
                        dp[i][j]=true;
                        if(j-i+1>MaxSize){
                            MaxSize=j-i+1;
                            begin=i;
                        }
                    }
                    else{
                        dp[i][j]=dp[i+1][j-1];
                        if ((j-i+1>MaxSize)&&(dp[i][j])){
                            MaxSize=j-i+1;
                            begin=i;
                        }
                    }
                }
                else dp[i][j]=false;
            }
        }
    return s.substr(begin,MaxSize);
    }
};
// @lc code=end

