#include "remove_dups.h"
// first solution, uses hash table and
// removes duplicates in O(N) time, with
// O(N) space complexity
void remove_dups_buffer(Node * head){
  if(head){
    Node * curr = head;
    std::unordered_map<int, int> values = {};
    values[curr->data] = 1;
    while(curr->next){
      if(values.count(curr->next->data)){
        curr->next = curr->next->next;
      } else {
        values[curr->next->data] = 1;
      }
      curr = curr->next;
    }
  }
}

// second solution, uses runner technique
// and removes duplicates in O(N^2) time, with
// O(1) space complexity
void remove_dups_no_buffer(Node * head){
  Node * curr = head;
  while(curr){
    Node * runner = curr;
    while(runner->next){
      if(curr->data == runner->next->data){
        runner->next = runner->next->next;
      }
      runner = runner->next;
    }
    curr = curr->next;
  }
}
