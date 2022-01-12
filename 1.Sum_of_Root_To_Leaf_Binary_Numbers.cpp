/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int totalSum = 0;
public:
    
    void findsum(TreeNode* root,int currSum)
    {
        if(root != NULL)
        {
            currSum = currSum<<1 | root->val;
             if(root->left == NULL && root->right == NULL)
             {
                 totalSum += currSum;
             }
            
            findsum(root->left,currSum);
            findsum(root->right,currSum);
        }
        
        
    }
    
    
    int sumRootToLeaf(TreeNode* root) {
        
        findsum(root,0);
        return totalSum;
        
    }
};
