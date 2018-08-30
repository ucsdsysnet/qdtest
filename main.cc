#include <iostream>
#include <thread>
#include <deque>
#include "qdtest.h"

using namespace std;

std::deque<kvpair*> * ssq;

int main(int argc, char* argv[])
{
	cerr << "Starting main" << endl;

	ssq = new std::deque<kvpair*>();

	std::thread src(src_main);
	std::thread sink(sink_main);

	src.join();
	sink.join();

	delete ssq;

	return 0;
}
