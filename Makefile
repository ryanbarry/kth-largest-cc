.PHONY: clean

kthlargest: main.cc
	c++ main.cc -o kthlargest

clean:
	rm kthlargest
