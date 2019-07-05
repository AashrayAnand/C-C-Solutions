struct Node {
  int data;
  Node* next = nullptr;
};

class LinkedList {
public:
  LinkedList();
  Node * head;
  void Insert(int);
  void printList();
  void generate();
};
