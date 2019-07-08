#include <iostream>
#include "node.h"

// utility functions, used to generate linked lists and print them

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

Node * generate_sequence_odd_length(){
  Node * head = new Node;
  int i;
  head->data = 10;
  for(i = 8; i > 0; i--){
    Node * new_node = new Node;
    new_node->data = i % 2 == 1 ? pow(i, 2) : i;
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
