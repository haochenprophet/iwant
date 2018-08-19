#ifndef STRTOD_H
#define STRTOD_H

#include "../object.h"

namespace n_strtod {
	class Cstrtod :public Object
	{
	public:
		Cstrtod();
		~Cstrtod();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strtod;

#endif
