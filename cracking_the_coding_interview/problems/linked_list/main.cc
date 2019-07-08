#include <iostream>

#ifndef NODE
#define NODE

// includes definition of node and prototypes functions
// for each problem
#include "node.h"

#endif
// this program executes all of the problem solutions implemented for
// the linked list chapter of cracking the coding interview, these consist
// of:

// 2.1: remove dups, remove duplicate values from
// a linked list, executes a solution which does
// so using a buffer, and one which doesn't

// 2.2 return Kth to last, gets the kth to
// last element of a linked list

// 2.3 Delete Middle Node, deletes the middle node of a linked list

int main(){
  // GENERATE LINKED LIST WITH DUPLICATES
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

  head = generate_sequence();
  Node * k = return_Kth_to_Last(head, 3);
  printlist(head);
  std::cout << "kth to last element of list (k = 3) is: " << (k ? k->data : 0) << std::endl;

  // GENERATE LINKED LIST WITH DUPLICATES
  LinkedList ll;
  ll.generate();
  std::cout << "list before remove_dups (LinkedList class)" << std::endl;
  ll.printList();
  ll.remove_dups();
  std::cout << "list after remove_dups (LinkedList class)" << std::endl;
  ll.printList();

  ll.generate();
  std::cout << "current list" << std::endl;
  ll.printList();
  std::cout << "kth element (k = 3)" << std::endl;
  k = ll.Kth_to_last(3);
  std::cout << k->data << std::endl;

  head = generate_sequence();
  printlist(head);
  delete_middle(head);
  std::cout << "list after removing middle" << std::endl;
  printlist(head);

  head = generate_sequence_odd_length();
  printlist(head);
  delete_middle(head);
  std::cout << "list after removing middle" << std::endl;
  printlist(head);
}
