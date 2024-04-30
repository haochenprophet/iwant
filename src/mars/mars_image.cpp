#include "mars_image.h"
int Cmars_image::my_init(void *p)
{
	this->name = "Cmars_image";
	this->alias = "mars_image";
	return 0;
}

Cmars_image::Cmars_image()
{
	this->my_init();
}

Cmars_image::~Cmars_image()
{

}

#ifndef MARS_IMAGE_TEST
#define MARS_IMAGE_TEST 0//1
#endif

#if MARS_IMAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
