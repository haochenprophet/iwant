#include "car_network.h"
int Ccar_network::my_init(void *p)
{
	this->name = "Ccar_network";
	this->alias = "car_network";
	return 0;
}

Ccar_network::Ccar_network()
{
	this->my_init();
}

Ccar_network::~Ccar_network()
{

}

#ifndef CAR_NETWORK_TEST
#define CAR_NETWORK_TEST 0//1
#endif

#if CAR_NETWORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
