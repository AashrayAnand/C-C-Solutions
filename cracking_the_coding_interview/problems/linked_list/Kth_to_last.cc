#include "node.h"

Node * return_Kth_to_Last(Node * head, int k){
  int len = 0;
  Node * curr = head;
  while(curr){
    len++;
    curr = curr->next;
  }

  if(len >= k){
    int diff = len - k;
    curr = head;
    while(diff--){
      curr = curr->next;
    }
    return curr;
  }
  return nullptr;
}
