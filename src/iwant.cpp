#include <stdio.h>
#include "iwant.h"
#define IWANT_TEST	1


Ciwant::Ciwant()
{
#if IWANT_TEST	
	printf("Ciwant::Ciwant()\n");
#ednif	
}

Ciwant::~Ciwant()
{
#if IWANT_TEST
	printf("Ciwant::~Ciwant()\n");
#ednif	
}

#if IWANT_TEST
int main(int argc ,char *argv[])
{
	Ciwant i;
	printf("Hello iwant APP .\n");
	return 0;
}
#ednif