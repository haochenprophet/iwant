#include "airplane_fin.h"
int Cairplane_fin::my_init(void *p)
{
	this->name = "Cairplane_fin";
	this->alias = "airplane_fin";
	return 0;
}

Cairplane_fin::Cairplane_fin()
{
	this->my_init();
}

Cairplane_fin::~Cairplane_fin()
{

}

#ifndef AIRPLANE_FIN_TEST
#define AIRPLANE_FIN_TEST 0//1
#endif

#if AIRPLANE_FIN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
