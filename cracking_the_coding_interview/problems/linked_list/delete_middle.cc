#include "node.h"

void delete_middle(Node * head){
  int len = 0;
  Node * curr = head;
  while(curr){
    len++;
    curr = curr->next;
  }
  curr = head;
  // for a list of n nodes, will stop one before the middle node
  for(int i = 0; i < (len / 2) - 1; i++){
    curr = curr->next;
  }
  curr->next = curr->next->next;
  // call delete middle again if no exact middle (odd number of nodes)
  if(len % 2 == 0){
    delete_middle(head);
  }
}
