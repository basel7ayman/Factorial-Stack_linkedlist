#include "../include/Stack.hpp"

int main() {
  Stack s;
  int size = 6;
  int tmp;

  for (int i = 0; i < size; i++) {
    s.push(i + 1);
  }

  for (int i = 0; i < size / 2 + 1; i++) {
    tmp = s.pop() * s.pop();
    s.push(tmp);
  }
  std::cout << s.pop() << std::endl;

  return 0;
}