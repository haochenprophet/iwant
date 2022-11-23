#include "insert.h"
int Cinsert::my_init(void *p)
{
	this->name = "Cinsert";
	this->alias = "insert";
	return 0;
}

Cinsert::Cinsert()
{
	this->my_init();
}

Cinsert::~Cinsert()
{

}

#ifndef INSERT_TEST
#define INSERT_TEST 0//1
#endif

#if INSERT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
