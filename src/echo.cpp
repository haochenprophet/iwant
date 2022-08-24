#include "echo.h"

Cecho::Cecho()
{
	this->name = "Cecho";
	this->alias = "echo";
}

#ifndef ECHO_TEST
#define ECHO_TEST 0//1
#endif

#if ECHO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
