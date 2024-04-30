#include "collect_file.h"
int Ccollect_file::my_init(void *p)
{
	this->name = "Ccollect_file";
	this->alias = "collect_file";
	return 0;
}

Ccollect_file::Ccollect_file()
{
	this->my_init();
}

Ccollect_file::~Ccollect_file()
{

}

#ifndef COLLECT_FILE_TEST
#define COLLECT_FILE_TEST 0//1
#endif

#if COLLECT_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
