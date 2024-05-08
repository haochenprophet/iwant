#ifndef MATERIEL_SELECT_H
#define MATERIEL_SELECT_H

#include "../object.h"

namespace n_materiel_select {
	class Cmateriel_select :public Object
	{
	public:
		Cmateriel_select();
		~Cmateriel_select();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_select); }
	};
}

using namespace n_materiel_select;

#endif
