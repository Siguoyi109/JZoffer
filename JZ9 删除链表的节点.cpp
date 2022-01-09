/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    ListNode* deleteNode(ListNode* head, int val) {
        ListNode* tmp = head;
        ListNode* last = head;
        if(head->val==val) return head->next;
        tmp = tmp->next;
        while(tmp){
            if(tmp->val==val){
                last->next = tmp->next;   //跨过这个节点
                return head;
            }
            tmp=tmp->next;
            last=last->next;
        }
        return head;
    }
};