#include "car_mayday.h"
int Ccar_mayday::my_init(void *p)
{
	this->name = "Ccar_mayday";
	this->alias = "car_mayday";
	return 0;
}

Ccar_mayday::Ccar_mayday()
{
	this->my_init();
}

Ccar_mayday::~Ccar_mayday()
{

}

#ifndef CAR_MAYDAY_TEST
#define CAR_MAYDAY_TEST 0//1
#endif

#if CAR_MAYDAY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
