#include "node.h"

// utility functions, used to generate linked lists and print them

Node * generate_sequence(){
  Node * head = new Node;
  int i;
  head->data = 10;
  for(i = 6; i > 0; i--){
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
  for(i = 10; i > 0; i--){
    Node * new_node = new Node;
    new_node->data = i % 2 == 1 ? pow(i, 2) : i;
    new_node->next = head;
    head = new_node;
  }
  return head;
}

Node * generate_palindrome(){
  Node * head = new Node;
  Node * curr = head;
  int i;
  curr->data = 0;
  for(i = 1; i < 5; i++){
    Node * new_node = new Node;
    new_node->data = i;
    curr->next = new_node;
    curr = curr->next;
  }
  for(i = 4; i >= 1; i--){
    Node * new_node = new Node;
    new_node->data = i;
    curr->next = new_node;
    curr = curr->next;
  }
  curr->next = new Node;
  curr = curr->next;
  curr->data = 0;
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

void printcycle(Node * head){
  std::unordered_map<Node *, int> values;
  Node * curr = head;
  while(curr && values.count(curr) != 1){
    values[curr] = 1;
    std::cout << curr->data << std::endl;
    curr = curr->next;
  }
  std::cout << "front of loop is " << curr->data << std::endl;
}

void clear(Node * head){
  if(head){
    while(head->next){
      Node * curr = head->next;
      head->next = head->next->next;
      delete(curr);
    }
    delete(head);
  }
}
