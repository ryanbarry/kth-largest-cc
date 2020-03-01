#pragma once

#include <vector>

class BinaryHeap {
 public:
  BinaryHeap();
  void push(int i);
  void pop();
  int top();

 private:
  std::vector<int> h;
};
