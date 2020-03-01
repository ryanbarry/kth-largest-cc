.PHONY: clean

kthlargest: main.cc BinaryHeap.cc
	c++ -g -O0 main.cc BinaryHeap.cc -o kthlargest

clean:
	rm kthlargest
