#ifndef IF_H
#define IF_H

#include "object/object.h"

namespace n_if {
	class Cif :public Object
	{
	public:
		Cif();
		int my_init(void *p=nullptr);
	};
}

using namespace n_if;

#endif
