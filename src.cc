#include <iostream>
#include <thread>
#include <deque>
#include <string.h>
#include "qdtest.h"

using namespace std;

#define MAX_SIZE 100000000

void src_main() {
	uint64_t kvpairs_produced = 0;

	while(true) {
		if (ssq->size() < MAX_SIZE) {
			kvpair * p = new kvpair();
			memset(p->key, 0, 10);
			memset(p->value, 0, 90);

			ssq->push_back(p);

			if (kvpairs_produced++ % 10000000) {
				cout << "+";
			}
		}
	}
}
