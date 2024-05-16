#ifndef WARSHIP_H
#define WARSHIP_H

#include "object/object.h"

namespace n_warship {
	class Cwarship :public Object
	{
	public:
		Cwarship();
		~Cwarship();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cwarship); }
	};
}

using namespace n_warship;

#endif
