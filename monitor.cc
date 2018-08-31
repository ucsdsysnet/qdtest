#include <iostream>
#include <thread>
#include <string.h>
#include <assert.h>
#include <chrono>
#include "qdtest.h"

using namespace std;

void monitor_main() {
	uint64_t oldval = 0;

	while(true) {
		cout << (kvpairs_sinked - oldval) << endl;
		oldval = kvpairs_sinked;

		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}
