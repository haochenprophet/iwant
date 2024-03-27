#include "ocean_oxygen_content.h"
int Cocean_oxygen_content::my_init(void *p)
{
	this->name = "Cocean_oxygen_content";
	this->alias = "ocean_oxygen_content";
	return 0;
}

Cocean_oxygen_content::Cocean_oxygen_content()
{
	this->my_init();
}

Cocean_oxygen_content::~Cocean_oxygen_content()
{

}

#ifndef OCEAN_OXYGEN_CONTENT_TEST
#define OCEAN_OXYGEN_CONTENT_TEST 0//1
#endif

#if OCEAN_OXYGEN_CONTENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
