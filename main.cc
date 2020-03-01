//#include <queue>
//typedef std::priority_queue<int> PrioQ;
#include "BinaryHeap.h"
typedef BinaryHeap PrioQ;

int main(int argc, char *argv[]) {
  int arr[] = {1,3,9,4,7,6,8,2,5};
  int arrsz = sizeof(arr)/sizeof(int);
  int k = 3;

  if(k > arrsz || k < 1) {
    printf("error, 1 ≤ k ≤ len(arr) does not hold for given k & arr\n");
  }

  PrioQ * q = new PrioQ();

  for(int i=0; i < arrsz; i++) {
    q->push(arr[i]);
  }

  for(int i=1; i < k; i++) {
    q->pop();
  }

  int result = q->top();

  printf("result: %d\n", result);

  return 0;
}

