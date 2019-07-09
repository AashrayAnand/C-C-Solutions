#include "node.h"

bool intersection(Node * head1, Node * head2){
  Node * curr1 = head1;
  Node * curr2 = head2;
  std::unordered_map<Node *, int> values;
  while(curr1 && curr2){
    if(values.count(curr1) || values.count(curr2) || curr1 == curr2){
      return true;
    }
    values[curr1] = 1;
    values[curr2] = 1;
    curr1 = curr1->next;
    curr2 = curr2->next;
  }

  while(curr1){
    if(values.count(curr1)){
      return true;
    }
    values[curr1] = 1;
    curr1 = curr1->next;
  }

  while(curr2){
    if(values.count(curr2)){
      return true;
    }
    values[curr2] = 1;
    curr2 = curr2->next;
  }

  return false;
}
