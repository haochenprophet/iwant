#ifndef FDIM_H
#define FDIM_H

#include "../object.h"

namespace n_fdim {
	class Cfdim :public Object
	{
	public:
		Cfdim();
		~Cfdim();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cfdim); }
	};
}

using namespace n_fdim;

#endif
