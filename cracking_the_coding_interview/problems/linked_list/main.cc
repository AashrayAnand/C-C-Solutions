#include <iostream>

#ifndef NODE
#define NODE

#include "node.h"

#endif

#include "remove_dups.h"
// this program executes all of the problem solutions implemented for
// the linked list chapter of cracking the coding interview, these consist
// of:

// 2.1: remove dups, remove duplicate values from
// a linked list, executes a solution which does
// so using a buffer, and one which doesn't

// 2.2 return Kth to last, gets the kth to
// last element of a linked list

// 2.3 Delete Middle Node, deletes the middle node of a linked list

Node * generate_sequence(){
  Node * head = new Node;
  int i;
  head->data = 10;
  for(i = 9; i > 0; i--){
    Node * new_node = new Node;
    new_node->data = i % 2 == 0 ? 1 : i;
    new_node->next = head;
    head = new_node;
  }
  return head;
}

void printlist(Node * head){
  Node * curr = head;
  std:: cout << '[';
  while(curr){
    std::cout << curr->data << (curr->next ? ", " : "");
    curr = curr->next;
  }
  std:: cout << ']' << std::endl;
}

int main(){
  Node * head = generate_sequence();
  std::cout << "list before remove_dups_buffer" << std::endl;
  printlist(head);
  remove_dups_buffer(head);
  std::cout << "list after remove_dups_buffer" << std::endl;
  printlist(head);

  head = generate_sequence();
  std::cout << "list before remove_dups_no_buffer" << std::endl;
  printlist(head);
  remove_dups_no_buffer(head);
  std::cout << "list after remove_dups_no_buffer" << std::endl;
  printlist(head);

  LinkedList ll;
  ll.generate();
  ll.printList();
}
