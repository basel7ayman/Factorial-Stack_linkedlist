#ifndef NODE_HPP
#define NODE_HPP

struct Node {
  int data;
  Node* prev;
  Node* next;
  Node(int);
};

#endif