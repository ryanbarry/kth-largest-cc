#include "BinaryHeap.h"

BinaryHeap::BinaryHeap() {
  h = std::vector<int>();
}

void BinaryHeap::push(int i) {
  h.push_back(i);
  upheap();
}

void BinaryHeap::pop() {
  h.pop_back();
}

int BinaryHeap::top() {
  return h.front();
}

// private methods below

void BinaryHeap::upheap() {
  int currentElement, parentElement;
  currentElement = h.size()-1;
  parentElement = getParentIndex(currentElement);

  while(h[currentElement] > h[parentElement]) {
    swap(currentElement, parentElement);
    currentElement = parentElement;
    parentElement = getParentIndex(currentElement);
  }
}

void BinaryHeap::swap(int lIdx, int rIdx) {
  int tmp = h[lIdx];
  h[lIdx] = h[rIdx];
  h[rIdx] = tmp;
}

int BinaryHeap::getParentIndex(int childIdx) {
  return (childIdx-1)/2;
}
