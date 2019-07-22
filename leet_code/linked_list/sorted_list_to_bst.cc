#include "prototypes.h"

TreeNode* sortedListToBST(ListNode* head) {
  if(!head){
      return NULL;
  }
  // get the middle node, set as root, then nodes before
  // middle node form left sub tree,
  ListNode* curr = head;
  ListNode* prev = head;
  ListNode* fast = head;
  while(curr && fast && fast->next){
      prev = curr;
      curr = curr->next;
      fast = fast->next->next;
  }
  TreeNode* root = new TreeNode(curr->val);
  if(curr != head){
      prev->next = NULL;
      root->left = sortedListToBST(head);
  } else {
      root->left = NULL;
  }
  root->right = sortedListToBST(curr->next);
  return root;
  // len is now the number of nodes in list, if odd, then
  // n / 2 is distance from head to middle node
}
