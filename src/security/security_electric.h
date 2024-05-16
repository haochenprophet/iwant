#ifndef SECURITY_ELECTRIC_H
#define SECURITY_ELECTRIC_H

#include "object/object.h"

namespace n_security_electric {
	class Csecurity_electric :public Object
	{
	public:
		Csecurity_electric();
		~Csecurity_electric();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_electric); }
	};
}

using namespace n_security_electric;

#endif
