#ifndef QDTEST_H
#define QDTEST_H

#include <deque>
#include <stdint.h>

typedef struct kvpair_t {
	uint8_t key[10];
	uint8_t value[90];
} kvpair;

void src_main();
void sink_main();

extern std::deque<kvpair*> * ssq;

#endif // QDTEST_H
