#include "material_timeline.h"
int Cmaterial_timeline::my_init(void *p)
{
	this->name = "Cmaterial_timeline";
	this->alias = "material_timeline";
	return 0;
}

Cmaterial_timeline::Cmaterial_timeline()
{
	this->my_init();
}

Cmaterial_timeline::~Cmaterial_timeline()
{

}

#ifndef MATERIAL_TIMELINE_TEST
#define MATERIAL_TIMELINE_TEST 0//1
#endif

#if MATERIAL_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
