#ifndef SECURITY_CHEMICAL_H
#define SECURITY_CHEMICAL_H

#include "../object.h"

namespace n_security_chemical {
	class Csecurity_chemical :public Object
	{
	public:
		Csecurity_chemical();
		~Csecurity_chemical();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_chemical); }
	};
}

using namespace n_security_chemical;

#endif
