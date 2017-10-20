#ifndef UCOMISS_H
#define UCOMISS_H

#include "object.h"

namespace n_UCOMISS {
	class CUCOMISS :public Object
	{
	public:
		CUCOMISS();
		~CUCOMISS();
		int my_init(void *p=nullptr);
	};
}

using namespace n_UCOMISS;

#endif
