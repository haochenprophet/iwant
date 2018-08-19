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
	};
}

using namespace n_scalbn;

#endif
