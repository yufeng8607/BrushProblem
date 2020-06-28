//二叉树先序遍历递归形式
void preV(TreeNode* root, vector<int>& res);

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preV(root, res);
        return res;
    }
};

void preV(TreeNode* root, vector<int>& res)
{
    if(root == nullptr)
    {
        return;
    }
    else
    {
        res.push_back(root->val);
    }
    preV(root->left, res);
    preV(root->right, res);
}
