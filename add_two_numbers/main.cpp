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
        ListNode* curFirst = l1;
        ListNode* curSecond = l2;
        ListNode* cur = nullptr;
        ListNode* rFirst = nullptr;
        int remainder = 0;
        while (curFirst != nullptr || curSecond != nullptr){
            int curVal = remainder;
            if (curFirst != nullptr){
                curVal += curFirst->val; 
                curFirst = curFirst->next;
            }
            if (curSecond != nullptr){
                curVal += curSecond->val; 
                curSecond = curSecond->next;
            }
            if (curVal > 9){
                remainder = 1;
                curVal -= 10;
            }
            else{
                remainder = 0;
            }
            ListNode* next = new ListNode(curVal);
            if (cur != nullptr){
                cur->next = next;
            }
            else{
                rFirst = next;
            }
            cur = next;
        }
        if (remainder == 1){
            cur->next = new ListNode(1);
        }
        return rFirst;
    }
        
};