#include <iostream>
#include <thread>
#include <deque>
#include "qdtest.h"

using namespace std;

void sink_main() {
	uint64_t kvpairs_sinked = 0;

	while(true) {
		if (!ssq->empty()) {
			kvpair * p = ssq->front();
			ssq->pop_front();
			delete p;

			if (kvpairs_sinked++ % 10000000) {
				cout << "-";
			}
		}

	}
}
