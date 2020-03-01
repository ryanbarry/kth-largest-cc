#include "BinaryHeap.h"

BinaryHeap::BinaryHeap() {
  h = std::vector<int>();
}

void BinaryHeap::push(int i) {
  h.push_back(i);
  upheap();
}

void BinaryHeap::pop() {
  h[0] = h.back();
  h.pop_back();
  downheap();
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

void BinaryHeap::downheap() {
  int currentElement = 0,
    rightChildIdx = getRightChildIndex(currentElement),
    rightChildVal = h[rightChildIdx],
    leftChildIdx = getLeftChildIndex(currentElement),
    leftChildVal = h[leftChildIdx];

  while(h[currentElement] < leftChildVal && h[currentElement] < rightChildVal) {
    int swapIndex = leftChildVal < rightChildVal ? rightChildIdx : leftChildIdx;
    swap(currentElement, swapIndex);
    currentElement = swapIndex;

    rightChildIdx = getRightChildIndex(currentElement);
    rightChildVal = h[rightChildIdx];
    leftChildIdx = getLeftChildIndex(currentElement);
    leftChildVal = h[leftChildIdx];
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

int BinaryHeap::getLeftChildIndex(int parentIdx) {
  return (parentIdx*2)+1;
}

int BinaryHeap::getRightChildIndex(int parentIdx) {
  return (parentIdx*2)+2;
}
