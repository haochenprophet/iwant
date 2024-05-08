#ifndef MATERIEL_URL_H
#define MATERIEL_URL_H

#include "../object.h"

namespace n_materiel_url {
	class Cmateriel_url :public Object
	{
	public:
		Cmateriel_url();
		~Cmateriel_url();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cmateriel_url); }
	};
}

using namespace n_materiel_url;

#endif
