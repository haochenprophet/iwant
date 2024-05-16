#include "satellite_news.h"
int Csatellite_news::my_init(void *p)
{
	this->name = "Csatellite_news";
	this->alias = "satellite_news";
	return 0;
}

Csatellite_news::Csatellite_news()
{
	this->my_init();
}

Csatellite_news::~Csatellite_news()
{

}

#ifndef SATELLITE_NEWS_TEST
#define SATELLITE_NEWS_TEST 0//1
#endif

#if SATELLITE_NEWS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
