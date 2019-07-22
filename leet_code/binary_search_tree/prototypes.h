#include <iostream>

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x): val(x), next(NULL) {}
}

struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x): val(x), left(NULL), right(NULL) {}
}

// given a preorder traversal of a tree, construct a
// binary search tree
TreeNode * bstFromPreorder(vector<int>&);

// helper function for inserting nodes into tree
TreeNode * insert(TreeNode *, int);

// given a tree of 0s and 1s, prune subtrees which contain
// no 1s
TreeNode * pruneTree(TreeNode *);
