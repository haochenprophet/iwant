#include "warship_deck.h"
int Cwarship_deck::my_init(void *p)
{
	this->name = "Cwarship_deck";
	this->alias = "warship_deck";
	return 0;
}

Cwarship_deck::Cwarship_deck()
{
	this->my_init();
}

Cwarship_deck::~Cwarship_deck()
{

}

#ifndef WARSHIP_DECK_TEST
#define WARSHIP_DECK_TEST 0//1
#endif

#if WARSHIP_DECK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
