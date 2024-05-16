#ifndef MATERIEL_TYPE_H
#define MATERIEL_TYPE_H

#include "object/object.h"

namespace n_materiel_type {
	class Cmateriel_type :public Object
	{
	public:
		Cmateriel_type();
		~Cmateriel_type();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_type); }
	};
}

using namespace n_materiel_type;

#endif
