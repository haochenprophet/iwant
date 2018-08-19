#ifndef TOWCTRANS_H
#define TOWCTRANS_H

#include "../object.h"

namespace n_towctrans {
	class Ctowctrans :public Object
	{
	public:
		Ctowctrans();
		~Ctowctrans();
		int my_init(void *p=nullptr);
	};
}

using namespace n_towctrans;

#endif
