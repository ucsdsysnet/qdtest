#include <iostream>
#include <thread>
#include <deque>
#include <assert.h>
#include <chrono>
#include "qdtest.h"

using namespace std;

void sink_main() {

	while(true) {
		if (!ssq->empty()) {
			while(lock.test_and_set(std::memory_order_acquire));

			kvpair * p = ssq->front();
			ssq->pop_front();

			lock.clear(std::memory_order_release); // release

			assert(p);
			delete p;

			kvpairs_sinked++;
		}

	}
}
