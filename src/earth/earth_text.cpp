#include "earth_text.h"
int Cearth_text::my_init(void *p)
{
	this->name = "Cearth_text";
	this->alias = "earth_text";
	return 0;
}

Cearth_text::Cearth_text()
{
	this->my_init();
}

Cearth_text::~Cearth_text()
{

}

#ifndef EARTH_TEXT_TEST
#define EARTH_TEXT_TEST 0//1
#endif

#if EARTH_TEXT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
