#ifndef QDTEST_H
#define QDTEST_H

#include <deque>
#include <stdint.h>
#include <atomic>

typedef struct kvpair_t {
	uint8_t key[10];
	uint8_t value[90];
} kvpair;

void src_main();
void sink_main();
void monitor_main();

extern std::deque<kvpair*> * ssq;
extern std::atomic_flag lock;
extern uint64_t kvpairs_sinked;

#endif // QDTEST_H
