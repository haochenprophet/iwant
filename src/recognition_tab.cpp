#include "recognition_tab.h"
int Crecognition_tab::my_init(void *p)
{
	this->name = "Crecognition_tab";
	this->alias = "recognition_tab";
	return 0;
}

Crecognition_tab::Crecognition_tab()
{
	this->my_init();
}

Crecognition_tab::~Crecognition_tab()
{

}

#ifndef RECOGNITION_TAB_TEST
#define RECOGNITION_TAB_TEST 0//1
#endif

#if RECOGNITION_TAB_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
