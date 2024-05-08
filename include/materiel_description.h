#ifndef MATERIEL_DESCRIPTION_H
#define MATERIEL_DESCRIPTION_H

#include "../object.h"

namespace n_materiel_description {
	class Cmateriel_description :public Object
	{
	public:
		Cmateriel_description();
		~Cmateriel_description();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_description); }
	};
}

using namespace n_materiel_description;

#endif
