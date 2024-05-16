#include "car_os.h"
int Ccar_os::my_init(void *p)
{
	this->name = "Ccar_os";
	this->alias = "car_os";
	return 0;
}

Ccar_os::Ccar_os()
{
	this->my_init();
}

Ccar_os::~Ccar_os()
{

}

#ifndef CAR_OS_TEST
#define CAR_OS_TEST 0//1
#endif

#if CAR_OS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
