#ifndef MATERIEL_FROM_TO_H
#define MATERIEL_FROM_TO_H

#include "object/object.h"

namespace n_materiel_from_to {
	class Cmateriel_from_to :public Object
	{
	public:
		Cmateriel_from_to();
		~Cmateriel_from_to();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_from_to); }
	};
}

using namespace n_materiel_from_to;

#endif
