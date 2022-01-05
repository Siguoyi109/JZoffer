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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        ListNode *ta = pHead1, *tb = pHead2;
        while (ta != tb) {
            ta = ta ? ta->next : pHead2;  //这里是=不是==，要看清；
            tb = tb ? tb->next : pHead1;  //相当于先走了遍a再走了遍b；
        }
        return ta;
    }
};