#include "../include/Stack.hpp"

Stack::Stack() {
  LOG("No Parameter Constructor Stack()");
  count = 0;
  head = nullptr;
}

void Stack::push(int value) {
  Node* newNode = new Node(value);
  if (isEmpty()) {
    head = newNode;
    newNode->next = nullptr;
    newNode->prev = nullptr;
  } else {
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
    newNode->prev = nullptr;
  }
}
int Stack::pop() {
  Node* current = head;

  if (isEmpty())
    throw std::out_of_range("stack is empty");

  else if (head->next == nullptr) {
    head = nullptr;
  } else {
    head = head->next;
    head->prev = nullptr;
  }
  int data = current->data;
  delete current;
  return data;
}
void Stack::display() {
  Node* current = head;
  if (isEmpty()) {
    std::cout << "list is empty. ";
  }
  while (current != nullptr) {
    std::cout << current->data << "---> \t";
    current = current->next;
  }
  std::cout << std::endl;
}

bool Stack::isEmpty() { return head == nullptr ? true : false; }

Stack::~Stack() {
  LOG("Destructor");
  Node* current = head;

  while (current != nullptr) {
    Node* nextNode = current->next;

    delete current;

    current = nextNode;
  }
  head = nullptr;
  count = 0;
}
