/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        ListNode *p = head;
        int len = 0;
        if (head == NULL) {
            return {};
        }
        while (p) {
            p = p->next;
            len++;
        }
        vector<int> nums(len);
        p = head;
        for (int i = len - 1; i >= 0; i--) {
            nums[i] = p->val;
            p = p->next;
        }
        return nums; 
    }
};