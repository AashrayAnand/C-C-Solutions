#include "prototypes.h"

TreeNode* bstFromPreorder(vector<int>& preorder) {
  if(preorder.size() > 0){
      TreeNode * root = new TreeNode(preorder[0]);
      int i;
      for(i = 1; i < preorder.size(); i++){
          root = insert(root, preorder[i]);
      }
      return root;
  }
  return nullptr;
}

TreeNode * insert(TreeNode * curr, int num){
  if(!curr){
      return new TreeNode(num);
  }
  // move down the tree based on comparison of value to current node,
  // create new child of curr if the child to advance to is null,
  // otherwise, execute recursive call
  if(num > curr->val){
      curr->right = insert(curr->right, num);
  } else if(num < curr->val){
      curr->left = insert(curr->left, num);
  }
  return curr;
}
