#include "ocean_news.h"
int Cocean_news::my_init(void *p)
{
	this->name = "Cocean_news";
	this->alias = "ocean_news";
	return 0;
}

Cocean_news::Cocean_news()
{
	this->my_init();
}

Cocean_news::~Cocean_news()
{

}

#ifndef OCEAN_NEWS_TEST
#define OCEAN_NEWS_TEST 0//1
#endif

#if OCEAN_NEWS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
