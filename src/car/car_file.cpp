#include "car_file.h"
int Ccar_file::my_init(void *p)
{
	this->name = "Ccar_file";
	this->alias = "car_file";
	return 0;
}

Ccar_file::Ccar_file()
{
	this->my_init();
}

Ccar_file::~Ccar_file()
{

}

#ifndef CAR_FILE_TEST
#define CAR_FILE_TEST 0//1
#endif

#if CAR_FILE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
