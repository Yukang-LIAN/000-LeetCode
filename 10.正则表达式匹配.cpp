// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem10.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
class Solution {
public:
    bool isMatch(string s, string p) {

        int m=s.size();
        int n=p.size();
        vector<vector<int>> dp(m+1,vector<int> (n+1));

        auto matchs=[&](int i,int j){
            if(i==0) return false;
            if(p[j-1]=='.') return true;
            return s[i-1]==p[j-1];
        };

        for(int i=0;i<=m;i++){
            dp[i][0]=false;
            dp[0][0]=true;
            for(int j=1;j<=n;j++){
                if(p[j-1]!='*'){
                    if(matchs(i,j)) dp[i][j]=dp[i-1][j-1];
                    else dp[i][j]=false;
                }
                else{
                    dp[i][j]=dp[i][j-2];
                    if(matchs(i,j-1)) dp[i][j]|=dp[i-1][j];
                }
            }
        }
        
        return dp[m][n];
    }
};
// @lc code=end

