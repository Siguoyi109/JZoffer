/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param pHead ListNode类 
     * @param k int整型 
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        ListNode* r = pHead;
     while (k-- && r)
         r = r->next; // 移动右侧指针造成 k 的距离差
     if (k >= 0) return nullptr; // 此时说明 k 比链表长度长
     ListNode* l = pHead;
     while (r)
         r = r->next, l = l->next; // 两个指针一起移动找到倒数第 k 个节点
     return l;
    }
};
