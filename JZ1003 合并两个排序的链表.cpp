/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode *vhead=new ListNode(-1);
        ListNode *cur=vhead;
        while(pHead1&&pHead2){
            if (pHead1->val <= pHead2->val) {
                cur->next = pHead1;
                pHead1 = pHead1->next;
            }
            else{
                cur->next=pHead2;
                pHead2=pHead2->next;
            }
            cur=cur->next;
        }
        cur->next=pHead1?pHead1:pHead2;
        return vhead->next;
    }
};
