#ifndef MATERIEL_H
#define MATERIEL_H

#include "../object.h"

namespace n_materiel {
	class Cmateriel :public Object
	{
	public:
		Cmateriel();
		~Cmateriel();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel); }
	};
}

using namespace n_materiel;

#endif
