#include <iostream>
#include <thread>
#include <deque>
#include <atomic>
#include "qdtest.h"

using namespace std;

std::deque<kvpair*> * ssq;
std::atomic_flag lock = ATOMIC_FLAG_INIT;
uint64_t kvpairs_sinked;

int main(int argc, char* argv[])
{
	cerr << "Starting main" << endl;

	ssq = new std::deque<kvpair*>();
	kvpairs_sinked = 0;

	std::thread src(src_main);
	std::thread sink(sink_main);
	std::thread monitor(monitor_main);

	src.join();
	sink.join();

	delete ssq;

	return 0;
}
