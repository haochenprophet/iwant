#include "materiel_image.h"
int Cmateriel_image::my_init(void *p)
{
	this->name = "Cmateriel_image";
	this->alias = "materiel_image";
	return 0;
}

Cmateriel_image::Cmateriel_image()
{
	this->my_init();
}

Cmateriel_image::~Cmateriel_image()
{

}

#ifndef MATERIEL_IMAGE_TEST
#define MATERIEL_IMAGE_TEST 0//1
#endif

#if MATERIEL_IMAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
