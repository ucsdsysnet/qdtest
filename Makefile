all: qdtest

qdtest: main.cc src.cc sink.cc
	g++ -std=c++11 -pthread main.cc src.cc sink.cc -o qdtest

clean:
	rm -f qdtest
