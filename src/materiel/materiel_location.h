#ifndef MATERIEL_LOCATION_H
#define MATERIEL_LOCATION_H

#include "object/object.h"

namespace n_materiel_location {
	class Cmateriel_location :public Object
	{
	public:
		Cmateriel_location();
		~Cmateriel_location();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_location); }
	};
}

using namespace n_materiel_location;

#endif
