#include "recognition.h"
int Crecognition::my_init(void *p)
{
	this->name = "Crecognition";
	this->alias = "recognition";
	return 0;
}

Crecognition::Crecognition()
{
	this->my_init();
}

Crecognition::~Crecognition()
{

}

#ifndef RECOGNITION_TEST
#define RECOGNITION_TEST 0//1
#endif

#if RECOGNITION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
