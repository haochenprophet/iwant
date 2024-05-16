#include "car_policy.h"
int Ccar_policy::my_init(void *p)
{
	this->name = "Ccar_policy";
	this->alias = "car_policy";
	return 0;
}

Ccar_policy::Ccar_policy()
{
	this->my_init();
}

Ccar_policy::~Ccar_policy()
{

}

#ifndef CAR_POLICY_TEST
#define CAR_POLICY_TEST 0//1
#endif

#if CAR_POLICY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
