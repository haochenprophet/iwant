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

#ifndef HASHTAG_TEST
#define HASHTAG_TEST 0//1
#endif

#if HASHTAG_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "HASHTAG_TEST\n\n";

	return 0;
}
#endif 