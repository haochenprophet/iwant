#include "security_image.h"
int Csecurity_image::my_init(void *p)
{
	this->name = "Csecurity_image";
	this->alias = "security_image";
	return 0;
}

Csecurity_image::Csecurity_image()
{
	this->my_init();
}

Csecurity_image::~Csecurity_image()
{

}

#ifndef SECURITY_IMAGE_TEST
#define SECURITY_IMAGE_TEST 0//1
#endif

#if SECURITY_IMAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
