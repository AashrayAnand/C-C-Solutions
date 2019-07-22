#include "prototypes.h"

TreeNode* pruneTree(TreeNode* root) {
            if(root){
        root->left = pruneTree(root->left);
        root->right = pruneTree(root->right);
        // if both subtrees are empty, and the current node
        // value is 0, then subtree rooted at node has no
        // 1s and should be nullified
        if(!root->left && !root->right && root->val != 1){
            return nullptr;
        }
    }
    return root;
}
