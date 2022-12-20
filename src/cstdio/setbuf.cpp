#include "setbuf.h"
int Csetbuf::my_init(void *p)
{
	this->name = "Csetbuf";
	this->alias = "setbuf";
	return 0;
}

Csetbuf::Csetbuf()
{
	this->my_init();
}

Csetbuf::~Csetbuf()
{

}

void Csetbuf::setbuf_c(FILE* stream, char* buffer)
{
	setbuf( stream, buffer);
}

#ifndef SETBUF_TEST
#define SETBUF_TEST 0//1
#endif

#if SETBUF_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
