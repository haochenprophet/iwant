#ifndef AIRPLANE_FLIGHT_DECK_H
#define AIRPLANE_FLIGHT_DECK_H

#include "object/object.h"

namespace n_airplane_flight_deck {
	class Cairplane_flight_deck :public Object
	{
	public:
		Cairplane_flight_deck();
		~Cairplane_flight_deck();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cairplane_flight_deck); }
	};
}

using namespace n_airplane_flight_deck;

#endif
