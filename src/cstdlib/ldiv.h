#ifndef LDIV_H
#define LDIV_H

#include "../object.h"

namespace n_ldiv {
	class Cldiv :public Object
	{
	public:
		Cldiv();
		~Cldiv();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cldiv); }
	};
}

using namespace n_ldiv;

#endif
