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

  void upheap();
  void downheap();
  void swap(int, int);
  int getParentIndex(int);
  int getLeftChildIndex(int);
  int getRightChildIndex(int);
};
