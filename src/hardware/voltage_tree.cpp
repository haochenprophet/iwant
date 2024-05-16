#include "voltage_tree.h"
int Cvoltage_tree::my_init(void *p)
{
	this->name = "Cvoltage_tree";
	this->alias = "voltage_tree";
	return 0;
}

Cvoltage_tree::Cvoltage_tree()
{
	this->my_init();
}

Cvoltage_tree::~Cvoltage_tree()
{

}

#ifndef VOLTAGE_TREE_TEST
#define VOLTAGE_TREE_TEST 0//1
#endif

#if VOLTAGE_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
