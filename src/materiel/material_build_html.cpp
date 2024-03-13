#include "material_build_html.h"
int Cmaterial_build_html::my_init(void *p)
{
	this->name = "Cmaterial_build_html";
	this->alias = "material_build_html";
	return 0;
}

Cmaterial_build_html::Cmaterial_build_html()
{
	this->my_init();
}

Cmaterial_build_html::~Cmaterial_build_html()
{

}

#ifndef MATERIAL_BUILD_HTML_TEST
#define MATERIAL_BUILD_HTML_TEST 0//1
#endif

#if MATERIAL_BUILD_HTML_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
