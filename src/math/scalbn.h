#ifndef SCALBN_H
#define SCALBN_H

#include "../object.h"

namespace n_scalbn {
	class Cscalbn :public Object
	{
	public:
		Cscalbn();
		~Cscalbn();
		int my_init(void *p=nullptr);
		size_t my_size() { return sizeof(Cscalbn); }
	};
}

using namespace n_scalbn;

#endif
