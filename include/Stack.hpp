#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>

#include "../include/node.hpp"

#define LOG(str) std::cout << str << std::endl  // Macors

class Stack {
 private:
  Node* head;
  int count;
  bool isEmpty();

 public:
  Stack();
  ~Stack();

  void push(int data);
  int pop();
  void display(void);
};

#endif  // STACK_H
