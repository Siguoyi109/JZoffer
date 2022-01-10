/*
struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};
*/
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if(!pHead) return pHead;  //为空则直接返回空
        unordered_map<RandomListNode*, RandomListNode*>mp;  //创建哈希表
        RandomListNode* dummy=new RandomListNode(0);  //哨兵节点
        RandomListNode* pre=dummy,*cur=pHead;  //指向哨兵和链表头的指针
        while(cur){
            RandomListNode* clone=new RandomListNode(cur->label); //拷贝节点
            pre->next=clone;  //与上个节点连接
            mp[cur]=clone;  //记录映射关系
            pre=pre->next;  //指针移动
            cur=cur->next;
        }
        for(auto& [key,value]:mp){
            value->random=key->random==NULL?NULL:mp[key->random];
        }
        delete dummy;  //释放哨兵节点空间
        return mp[pHead];
    }
};
