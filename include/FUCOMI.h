#ifndef FUCOMI_H
#define FUCOMI_H

#include "../object.h"

namespace n_FUCOMI {
	class CFUCOMI :public Object
	{
	public:
		CFUCOMI();
		~CFUCOMI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FUCOMI;

#endif
