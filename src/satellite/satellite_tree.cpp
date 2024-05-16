#include "satellite_tree.h"
int Csatellite_tree::my_init(void *p)
{
	this->name = "Csatellite_tree";
	this->alias = "satellite_tree";
	return 0;
}

Csatellite_tree::Csatellite_tree()
{
	this->my_init();
}

Csatellite_tree::~Csatellite_tree()
{

}

#ifndef SATELLITE_TREE_TEST
#define SATELLITE_TREE_TEST 0//1
#endif

#if SATELLITE_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
