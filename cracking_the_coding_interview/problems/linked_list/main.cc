// Aashray Anand
// Cracking the Coding Interview: C++ solutions

// This main file can be executed with the following commands
// > make all
// > ./main
//
// this will execute tests for all of the linked list problems
// (chapter 2), from Cracking the Coding Interview

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
  // REMOVE DUPLICATES TESTS
  Node * head = generate_sequence();
  std::cout << "list before remove_dups_buffer" << std::endl;
  printlist(head);
  remove_dups_buffer(head);
  std::cout << "list after remove_dups_buffer" << std::endl;
  printlist(head);
  clear(head);

  head = generate_sequence();
  std::cout << "list before remove_dups_no_buffer" << std::endl;
  printlist(head);
  remove_dups_no_buffer(head);
  std::cout << "list after remove_dups_no_buffer" << std::endl;
  printlist(head);
  clear(head);
  //

  // KTH ELEMENT TESTS
  head = generate_sequence();
  Node * k = return_Kth_to_Last(head, 3);
  printlist(head);
  std::cout << "kth to last element of list (k = 3) is: " << (k ? k->data : 0) << std::endl;
  clear(head);
  //

  // REMOVE DUPLICATES TESTS (WITH LL DATA STRUCTURE)
  LinkedList ll;
  ll.generate();
  std::cout << "list before remove_dups (LinkedList class)" << std::endl;
  ll.printList();
  ll.remove_dups();
  std::cout << "list after remove_dups (LinkedList class)" << std::endl;
  ll.printList();
  //

  // KTH ELEMENT TESTS (WITH LL DATA STRUCTURE)
  ll.generate();
  std::cout << "current list" << std::endl;
  ll.printList();
  std::cout << "kth element (k = 3)" << std::endl;
  k = ll.Kth_to_last(3);
  std::cout << k->data << std::endl;
  //

  // DELETE MIDDLE TESTS
  head = generate_sequence();
  printlist(head);
  delete_middle(head);
  std::cout << "list after removing middle" << std::endl;
  printlist(head);
  clear(head);

  head = generate_sequence_odd_length();
  printlist(head);
  delete_middle(head);
  std::cout << "list after removing middle" << std::endl;
  printlist(head);
  clear(head);
  //

  // PARTITION TESTS
  head = generate_sequence();
  printlist(head);
  partition(head, 5);
  std::cout << "list after paritioning with p = 5" << std::endl;
  printlist(head);
  clear(head);
  //

  // SUM LIST TESTS
  head = generate_sequence();
  Node * head2 = generate_sequence_odd_length();
  printlist(head);
  printlist(head2);
  Node * res = sumList(head, head2);
  std::cout << "lists before being summed" << std::endl;
  printlist(res);
  clear(res);
  clear(head);
  clear(head2);
  //

  // PALINDROME TESTS
  head = generate_palindrome();
  printlist(head);
  std::cout << "is a palindrome ? " << std::endl;
  std::cout << (palindrome(head) == 1 ? "YES" : "NO") << std::endl;
  clear(head);

  head = generate_sequence();
  printlist(head);
  std::cout << "is a palindrome ? " << std::endl;
  std::cout << (palindrome(head) == 1 ? "YES" : "NO") << std::endl;
  clear(head);
  //

  // INTERSECTION TESTS
  head = generate_sequence();
  printlist(head);
  head2 = head->next->next->next;
  printlist(head2);
  std::cout << "these lists should intersect " << std::endl;
  std::cout << "if they do 1, otherwise 0..... -> "
    << intersection(head, head2) << std::endl;
  clear(head);

  head = generate_sequence();
  head2 = generate_sequence();
  printlist(head2);
  std::cout << "these lists should not intersect " << std::endl;
  std::cout << "if they do 1, otherwise 0..... -> "
    << intersection(head, head2) << std::endl;
  clear(head);
  clear(head2);
  //

  // FIND START OF CYCLE TESTS
}
