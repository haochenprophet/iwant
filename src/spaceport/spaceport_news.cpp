#include "spaceport_news.h"
int Cspaceport_news::my_init(void *p)
{
	this->name = "Cspaceport_news";
	this->alias = "spaceport_news";
	return 0;
}

Cspaceport_news::Cspaceport_news()
{
	this->my_init();
}

Cspaceport_news::~Cspaceport_news()
{

}

#ifndef SPACEPORT_NEWS_TEST
#define SPACEPORT_NEWS_TEST 0//1
#endif

#if SPACEPORT_NEWS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
