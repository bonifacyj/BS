#include <stdio.h>

#include "rdmsr.h"

int main(void)
{
	printf("Hello, user space!\n");
	uint64_t read_reg;
	int zero_div;
	read_reg = __assembly_rdmsr(MSR_SYSCALLTABLE_COMPAT);
	printf("%lu", read_reg);
	zero_div = 6/0;
	printf("Goodbye, user space!\n");
	return 0;
}

