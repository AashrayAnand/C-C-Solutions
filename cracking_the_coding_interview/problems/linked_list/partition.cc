#include "node.h"

void partition(Node * head, int p){
  if(head){
    Node * left = head;
    Node * right = nullptr;
    Node * right_tail = nullptr;
    // edge case: get all nodes from front of list (if any)
    // that are >= to the partitioning value
    while(left && left->data >= p){
      if(!right){
        right = left;
        right_tail = right;
      } else {
        right_tail->next = left;
        right_tail = right_tail->next;
      }
      left = left->next;
      head = left;
    }

    // iterate through remaining nodes, get the nodes that are >=
    // to the partitioning value and move them to the end of the list
    while(left){
      // keep adding next node to right side of partition
      // until next node is not to be added, or no nodes left
      while(left->next && left->next->data >= p){
        if(!right){
          right = left->next;
          right_tail = right;
        } else {
          right_tail->next = left->next;
          right_tail = right_tail->next;
        }
        left->next = left->next->next;
        right_tail->next = nullptr;
        printlist(right);
      }
      // iterate forward
      if(left->next){
        left = left->next;
      // no more nodes to check, combine partitions
      } else {
        left->next = right;
        break;
      }
    }
  }
}
