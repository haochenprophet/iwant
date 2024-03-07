#include "car_news.h"
int Ccar_news::my_init(void *p)
{
	this->name = "Ccar_news";
	this->alias = "car_news";
	return 0;
}

Ccar_news::Ccar_news()
{
	this->my_init();
}

Ccar_news::~Ccar_news()
{

}

#ifndef CAR_NEWS_TEST
#define CAR_NEWS_TEST 0//1
#endif

#if CAR_NEWS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
