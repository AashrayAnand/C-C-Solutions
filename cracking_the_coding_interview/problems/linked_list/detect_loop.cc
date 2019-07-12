#include "node.h"

// assuming given linked list has a cycle
Node * detectLoop(Node * head){
  if(head){
    // move 1 pointer one step at a time
    // another 2 steps at a time
    Node * tort = head;
    Node * hare = head;
    tort = tort->next;
    hare = hare->next->next;
    while(tort != hare){
      tort = tort->next;
      hare = hare->next->next;
    }
    // when they are at same node, move tortoise to head
    // and reduce speed of hare
    tort = head;
    while(tort != hare){
      tort = tort->next;
      hare = hare->next;
    }
    // when they are equal again, at the front of the cycle
    return tort;
  }
}
