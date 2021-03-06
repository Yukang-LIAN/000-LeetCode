// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem2.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        ListNode* l4;
        ListNode* Output=new ListNode(0);
        ListNode* OutputPtr;
        int carry=0;
        l3=l1;
        l4=l2;
        OutputPtr=Output;
        
        while(l4->next!=nullptr){
            if(l3->next==nullptr){
                l3->next=new ListNode(0);
            }
            l3=l3->next;
            l4=l4->next;
        }
        l3=l1;
        l4=l2;

         while(l3->next!=nullptr){
            if(l4->next==nullptr){
                l4->next=new ListNode(0);
            }
            l3=l3->next;
            l4=l4->next;
        }
        l3=l1;
        l4=l2;

        while((l3!=nullptr)&&(l4!=nullptr)){
            OutputPtr->val=(l3->val+l4->val+carry)%10;
            carry=(l3->val+l4->val+carry)/10;
            l3=l3->next;
            l4=l4->next;
            if((l3!=nullptr)&&(l4!=nullptr)){

                OutputPtr->next=new ListNode;
                OutputPtr=OutputPtr->next;

            }
        }

        if(carry!=0)
        OutputPtr->next=new ListNode(1);

        return Output;
    }
};
// @lc code=end

