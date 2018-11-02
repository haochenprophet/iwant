#include "hashtag.h"
int Chashtag::my_init(void *p)
{
	this->name = "Chashtag";
	this->alias = "hashtag";
	this->symbol = "#";
	return 0;
}

Chashtag::Chashtag()
{
	this->my_init();
}

Chashtag::~Chashtag()
{

}
