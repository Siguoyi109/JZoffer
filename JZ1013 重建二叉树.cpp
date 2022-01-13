/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
       if(pre.size()==0) return nullptr;
       TreeNode* root = new TreeNode(pre[0]);
       int i = 0;
       for(;i<=pre.size();i++){
           if (pre[0] == vin[i]) break;
       }
       vector< int > lowin(vin.begin(),vin.begin()+i);
       vector< int > highin(vin.begin()+i+1,vin.end());
       vector< int > lowpre(pre.begin()+1,pre.begin()+lowin.size()+1);
       vector< int > highpre(pre.begin()+lowin.size()+1,pre.end());
       root->left = reConstructBinaryTree(lowpre,lowin);
       root->right = reConstructBinaryTree(highpre,highin);
       return root;
    }
};
