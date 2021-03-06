// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem7.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int i=10;
        int bit=0;
        int num;
        int output=0;
        while(x!=0){
            num=x%i;
            if(bit==9){
                if(output>214748364||output<-214748364) return 0;
                //if(output==214748364&&num>7) return 0;
                //if(output==-21478364&&num<-8) return 0;
            }
            output=output*10+num;
            bit+=1;
            x=x/10;
        }
        return output;
    }
};
// @lc code=end

