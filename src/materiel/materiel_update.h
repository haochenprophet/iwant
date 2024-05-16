#ifndef MATERIEL_UPDATE_H
#define MATERIEL_UPDATE_H

#include "object/object.h"

namespace n_materiel_update {
	class Cmateriel_update :public Object
	{
	public:
		Cmateriel_update();
		~Cmateriel_update();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_update); }
	};
}

using namespace n_materiel_update;

#endif
