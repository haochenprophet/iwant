#include "field.h"
int Cfield::my_init(void *p)
{
	this->name = "Cfield";
	this->alias = "field";
	return 0;
}

Cfield::Cfield()
{
	this->my_init();
}

Cfield::~Cfield()
{

}

#ifndef FIELD_TEST
#define FIELD_TEST 0//1
#endif

#if FIELD_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	cout << "FIELD_TEST\n\n";

	return 0;
}
#endif 