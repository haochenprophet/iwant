#include "material_action.h"
int Cmaterial_action::my_init(void *p)
{
	this->name = "Cmaterial_action";
	this->alias = "material_action";
	return 0;
}

Cmaterial_action::Cmaterial_action()
{
	this->my_init();
}

Cmaterial_action::~Cmaterial_action()
{

}

#ifndef MATERIAL_ACTION_TEST
#define MATERIAL_ACTION_TEST 0//1
#endif

#if MATERIAL_ACTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
