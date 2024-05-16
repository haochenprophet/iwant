#ifndef WARSHIP_DECK_H
#define WARSHIP_DECK_H

#include "object/object.h"

namespace n_warship_deck {
	class Cwarship_deck :public Object
	{
	public:
		Cwarship_deck();
		~Cwarship_deck();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship_deck); }
	};
}

using namespace n_warship_deck;

#endif
