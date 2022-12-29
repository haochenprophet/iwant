#ifndef LLDIV_H
#define LLDIV_H

#include "../object.h"

namespace n_lldiv {
	class Clldiv :public Object
	{
	public:
		Clldiv();
		~Clldiv();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Clldiv); }
	};
}

using namespace n_lldiv;

#endif
