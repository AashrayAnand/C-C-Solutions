#include "node.h"
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

void LinkedList::Insert(int data){
  if(head == nullptr){
    head = new Node;
    head->data = data;
  } else {
    Node * curr = head;
    while(curr->next){
      curr = curr->next;
    }
    curr->next = new Node;
    curr->next->data = data;
  }
}

void LinkedList::printList(){
  Node * curr = head;
  while(curr){
    std::cout << curr->data << (curr->next ? ", " : "");
    curr = curr->next;
  }
  std::cout << std::endl;
}

void LinkedList::generate(){
  int i;
  for(i = 0; i < 10; i++){
    Insert((i % 2 == 0 ? i : 1));
  }
}
