#include <math.h>

// node structure
struct Node {
  int data;
  Node* next = nullptr;
};

// utilities
Node * generate_sequence();
Node * generate_sequence_odd_length();
void printlist(Node *);

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

class LinkedList {
public:
  LinkedList();
  Node * head;
  void Insert(int);
  void printList();
  void generate();
  void remove_dups();
  Node * Kth_to_last(int);
};
