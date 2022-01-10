/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead) {
        unordered_set<ListNode*>st;
        while(pHead){
            if(st.find(pHead)==st.end()){
                st.insert(pHead);
                pHead=pHead->next;
            }
            else{
                return pHead;
            }
        }
        return nullptr;

    }
};
