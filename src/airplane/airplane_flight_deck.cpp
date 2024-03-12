#include "airplane_flight_deck.h"
int Cairplane_flight_deck::my_init(void *p)
{
	this->name = "Cairplane_flight_deck";
	this->alias = "airplane_flight_deck";
	return 0;
}

Cairplane_flight_deck::Cairplane_flight_deck()
{
	this->my_init();
}

Cairplane_flight_deck::~Cairplane_flight_deck()
{

}

#ifndef AIRPLANE_FLIGHT_DECK_TEST
#define AIRPLANE_FLIGHT_DECK_TEST 0//1
#endif

#if AIRPLANE_FLIGHT_DECK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
