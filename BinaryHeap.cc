#include "BinaryHeap.h"

BinaryHeap::BinaryHeap() {
  h = std::vector<int>();
}

void BinaryHeap::push(int i) {
  h.push_back(i);
}

void BinaryHeap::pop() {
  h.pop_back();
}

int BinaryHeap::top() {
  return h.front();
}
