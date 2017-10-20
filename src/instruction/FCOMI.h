#ifndef FCOMI_H
#define FCOMI_H

#include "object.h"

namespace n_FCOMI {
	class CFCOMI :public Object
	{
	public:
		CFCOMI();
		~CFCOMI();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FCOMI;

#endif
