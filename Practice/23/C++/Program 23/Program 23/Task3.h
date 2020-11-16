#include "Task1.h"
#ifndef Task_3
#define Task_3

int Task3(int k, int n) {
	return Task1(n) / Task1(k) / Task1(n - k);
}

#endif
