#include "material_action_sell.h"
int Cmaterial_action_sell::my_init(void *p)
{
	this->name = "Cmaterial_action_sell";
	this->alias = "material_action_sell";
	return 0;
}

Cmaterial_action_sell::Cmaterial_action_sell()
{
	this->my_init();
}

Cmaterial_action_sell::~Cmaterial_action_sell()
{

}

#ifndef MATERIAL_ACTION_SELL_TEST
#define MATERIAL_ACTION_SELL_TEST 0//1
#endif

#if MATERIAL_ACTION_SELL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
