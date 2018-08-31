all: qdtest

qdtest: main.cc src.cc sink.cc monitor.cc
	g++ -ggdb -std=c++11 -pthread main.cc src.cc sink.cc monitor.cc -o qdtest

clean:
	rm -f qdtest
