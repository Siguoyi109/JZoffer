/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    int TreeDepth(TreeNode* pRoot) {
        if(!pRoot) return 0;
        return bfs(pRoot);
    }
 
    int bfs(TreeNode* root){
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        while(q.size()){
            int s = q.size();    // 当前层数的结点数
            ++depth;
            for(int i = 0; i < s; i++){
                TreeNode* fa = q.front();
                q.pop();
                if(fa->left) q.push(fa->left);
                if(fa->right) q.push(fa->right);
                }
        }
        return depth;
    }
};
