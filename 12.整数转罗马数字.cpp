// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem12.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=12 lang=cpp
 *
 * [12] 整数转罗马数字
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) {

        string output;
        vector<int> value={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> roman={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

        for(int i=0;i<13;i++){

            while(value[i]<=num){
                num=num-value[i];
                output=output+roman[i];
            }
        }
        return output;

    }
};
// @lc code=end

