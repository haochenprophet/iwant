#ifndef MATERIEL_DELETE_H
#define MATERIEL_DELETE_H

#include "../object.h"

namespace n_materiel_delete {
	class Cmateriel_delete :public Object
	{
	public:
		Cmateriel_delete();
		~Cmateriel_delete();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_delete); }
	};
}

using namespace n_materiel_delete;

#endif
