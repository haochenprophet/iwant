#ifndef MATERIEL_OWNER_H
#define MATERIEL_OWNER_H

#include "object/object.h"

namespace n_materiel_owner {
	class Cmateriel_owner :public Object
	{
	public:
		Cmateriel_owner();
		~Cmateriel_owner();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_owner); }
	};
}

using namespace n_materiel_owner;

#endif
