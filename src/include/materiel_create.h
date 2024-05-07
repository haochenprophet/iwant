#ifndef MATERIEL_CREATE_H
#define MATERIEL_CREATE_H

#include "../object.h"

namespace n_materiel_create {
	class Cmateriel_create :public Object
	{
	public:
		Cmateriel_create();
		~Cmateriel_create();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_create); }
	};
}

using namespace n_materiel_create;

#endif
