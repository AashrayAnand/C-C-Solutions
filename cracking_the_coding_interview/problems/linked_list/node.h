#include <math.h>
#include <iostream>
#include <stack>
#include <unordered_map>

// node structure for singly linked list
struct Node {
  int data;
  Node* next = nullptr;
};

// node structure for doubly linked list
struct dll_Node {
  int data;
  Node* next = nullptr;
  Node* prev = nullptr;
};

// utilities
Node * generate_sequence();
Node * generate_sequence_odd_length();
void printlist(Node *);
void clear(Node *);
Node * generate_palindrome();

// problems

// 2.1: remove duplicates
void remove_dups_buffer(Node *);
void remove_dups_no_buffer(Node *);

// 2.2: return Kth to last element of list
Node * return_Kth_to_Last(Node *, int);

// 2.3: Delete Middle Node
void delete_middle(Node *);

// 2.4: Partition nodes
void partition(Node *, int);

// 2.5: sum lists
Node * sumList(Node *, Node *);

// 2.6: Palindrome
bool palindrome(Node *);

// 2.7: Intersection
bool intersection(Node *, Node *);

// 2.8: Loop detection
Node * detectLoop(Node *);

class LinkedList {
public:
  LinkedList();
  ~LinkedList();
  Node * head;
  void Insert(int);
  void printList();
  void generate();
  void remove_dups();
  Node * Kth_to_last(int);
};
