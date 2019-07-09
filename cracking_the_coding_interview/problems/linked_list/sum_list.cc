#include "node.h"

Node * sumList(Node * l1, Node * l2){
  if(l1 && !l2){
    return l1;
  }
  if(l2 && !l1){
    return l2;
  }

  // new list with sums
  Node * res = nullptr;
  // tail pointer
  Node * curr_res = nullptr;
  // carry bit
  int carry = 0;
  while(l1 || l2){
    // iterate through both lists in entirety, when both lists
    // are not null, sum the digits of the current nodes up
    int digit = (l1 ? l1->data : 0) + (l2 ? l2->data : 0) + carry;
    carry = digit >= 10;
    Node * next = new Node();
    next->data = digit % 10;
    if(curr_res){
      curr_res->next = next;
      curr_res = curr_res->next;
    } else {
      res = next;
      curr_res = res;
    }
    l1 = l1 ? l1->next : l1;
    l2 = l2 ? l2->next : l2;
  }
  return res;
}
