#ifndef MATERIEL_PRICE_H
#define MATERIEL_PRICE_H

#include "object/object.h"

namespace n_materiel_price {
	class Cmateriel_price :public Object
	{
	public:
		Cmateriel_price();
		~Cmateriel_price();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_price); }
	};
}

using namespace n_materiel_price;

#endif
