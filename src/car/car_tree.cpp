#include "car_tree.h"
int Ccar_tree::my_init(void *p)
{
	this->name = "Ccar_tree";
	this->alias = "car_tree";
	return 0;
}

Ccar_tree::Ccar_tree()
{
	this->my_init();
}

Ccar_tree::~Ccar_tree()
{

}

#ifndef CAR_TREE_TEST
#define CAR_TREE_TEST 0//1
#endif

#if CAR_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
