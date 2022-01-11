/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    int count=0; //标记现在是第几个数
    vector<int>res;
    int KthNode(TreeNode* proot, int k) {
        if(proot==nullptr||k==0)
            return -1;
        ++count;
        KthNode(proot->left, k);
        res.push_back(proot->val);
        KthNode(proot->right, k);
        return res.size()>=k?res[k-1]:-1;
    }
};