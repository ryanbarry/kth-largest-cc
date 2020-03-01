.PHONY: clean

kthlargest: main.cc BinaryHeap.cc
	c++ main.cc BinaryHeap.cc -o kthlargest

clean:
	rm kthlargest
