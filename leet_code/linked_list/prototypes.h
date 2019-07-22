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

// given a sorted linked list, return a balanced BST representation
// of the same sorted list
TreeNode* sortedListToBST(ListNode*);

// given a linked list, swap it in pairs of 2 nodes
ListNode* swapPairs(ListNode *);

// given a sorted linked list, delete all duplicates
ListNode* deleteDuplicates(ListNode *);
