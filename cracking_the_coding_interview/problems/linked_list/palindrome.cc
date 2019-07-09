#include "node.h"

bool palindrome(Node * head){
  Node * curr = head;
  std::stack<Node *> rev;
  while(curr){
    rev.push(curr);
    curr = curr->next;
  }
  curr = head;
  while(!rev.empty()){
    if(curr->data != rev.top()->data){
      return false;
    }
    rev.pop();
    curr = curr->next;
  }
  return true;
}
