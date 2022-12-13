#include "timeline.h"

int Ctimeline::my_init(void *p)
{
	this->name = "Ctimeline";
	this->alias = "timeline";
	return 0;
}

Ctimeline::Ctimeline()
{
	this->my_init();
}

Ctimeline::~Ctimeline()
{

}

#ifndef TIMELINE_TEST
#define TIMELINE_TEST 0//1
#endif

#if TIMELINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
