#include "material_action_buy.h"
int Cmaterial_action_buy::my_init(void *p)
{
	this->name = "Cmaterial_action_buy";
	this->alias = "material_action_buy";
	return 0;
}

Cmaterial_action_buy::Cmaterial_action_buy()
{
	this->my_init();
}

Cmaterial_action_buy::~Cmaterial_action_buy()
{

}

#ifndef MATERIAL_ACTION_BUY_TEST
#define MATERIAL_ACTION_BUY_TEST 0//1
#endif

#if MATERIAL_ACTION_BUY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
