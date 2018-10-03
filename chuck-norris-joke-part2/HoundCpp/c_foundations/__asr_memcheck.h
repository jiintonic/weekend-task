
#ifndef __ASR_MEMCHECK_H_
#define __ASR_MEMCHECK_H_

//#define CHECK_MEMORY_ALLOCATION

#include <exception> // for std::bad_alloc
#include <new>
#include <cstdlib> // for malloc() and free()

//#include "memory_allocation.h" // Chris' code

#ifdef CHECK_MEMORY_ALLOCATION
void*
operator new (size_t size);

void operator delete (void *p);

#endif

#endif
