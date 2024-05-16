#include "home_news.h"
int Chome_news::my_init(void *p)
{
	this->name = "Chome_news";
	this->alias = "home_news";
	return 0;
}

Chome_news::Chome_news()
{
	this->my_init();
}

Chome_news::~Chome_news()
{

}

#ifndef HOME_NEWS_TEST
#define HOME_NEWS_TEST 0//1
#endif

#if HOME_NEWS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
