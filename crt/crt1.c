#include <stdlib.h>
#include <stdio.h>


void _start(void) {

	volatile int x=89;
	main(*((uint64_t*)(&x+0x3UL)),(char**)(uint64_t*)(&x+0x5UL), (char **)((&x+5) +  (2*(*(&x+3)+ 1))));
	exit(0);
}
