#include "node.h"
#include <iostream>
#include <unordered_map>

LinkedList::LinkedList(){
  head = nullptr;
}

LinkedList::~LinkedList(){
  if(head){
    Node * curr = head->next;
    while(curr){
      head->next = head->next->next;
      delete(curr);
      curr = head->next;
    }
    delete(head);
  }
}

void LinkedList::Insert(int data){
  if(!head){
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
  clear(head);
  head = nullptr;
  int i;
  for(i = 0; i < 10; i++){
    Insert((i % 2 == 0 ? i : 1));
  }
}

void LinkedList::remove_dups(){
  std::unordered_map<int, int> values = {};
  Node * curr = head;
  while(curr){
    if(values.count(curr->next->data)){
      Node * removed = curr->next;
      curr->next = curr->next->next;
      delete(removed);
    } else {
      values[curr->next->data] = 1;
    }
    curr = curr->next;
  }
}

Node * LinkedList::Kth_to_last(int k){
  int len = 0;
  Node * curr = head;
  while(curr){
    len++;
    curr = curr->next;
  }

  if(len >= k){
    int diff = len - k;
    curr = head;
    while(diff--){
      curr = curr->next;
    }
    return curr;
  }

  return nullptr;
}
