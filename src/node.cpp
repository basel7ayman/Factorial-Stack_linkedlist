#include "../include/node.hpp"

Node::Node(int data) {
  this->data = data;
  prev = nullptr;
  next = nullptr;
}