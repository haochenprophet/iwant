#include "airplane_broadcast.h"
int Cairplane_broadcast::my_init(void *p)
{
	this->name = "Cairplane_broadcast";
	this->alias = "airplane_broadcast";
	return 0;
}

Cairplane_broadcast::Cairplane_broadcast()
{
	this->my_init();
}

Cairplane_broadcast::~Cairplane_broadcast()
{

}

#ifndef AIRPLANE_BROADCAST_TEST
#define AIRPLANE_BROADCAST_TEST 0//1
#endif

#if AIRPLANE_BROADCAST_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
