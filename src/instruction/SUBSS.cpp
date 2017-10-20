#include "SUBSS.h"
int CSUBSS::my_init(void *p)
{
	this->name = "CSUBSS";
	this->alias = "SUBSS";
	return 0;
}

CSUBSS::CSUBSS()
{
	this->my_init();
}

CSUBSS::~CSUBSS()
{

}
