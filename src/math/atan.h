#ifndef ATAN_H
#define ATAN_H

#include "../object.h"

namespace n_atan {
	class Catan :public Object
	{
	public:
		Catan();
		~Catan();
		int my_init(void *p=nullptr);
	};
}

using namespace n_atan;

#endif
