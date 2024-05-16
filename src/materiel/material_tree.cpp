#include "material_tree.h"
int Cmaterial_tree::my_init(void *p)
{
	this->name = "Cmaterial_tree";
	this->alias = "material_tree";
	return 0;
}

Cmaterial_tree::Cmaterial_tree()
{
	this->my_init();
}

Cmaterial_tree::~Cmaterial_tree()
{

}

#ifndef MATERIAL_TREE_TEST
#define MATERIAL_TREE_TEST 0//1
#endif

#if MATERIAL_TREE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
