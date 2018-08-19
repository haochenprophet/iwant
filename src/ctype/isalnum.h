#ifndef ISALNUM_H
#define ISALNUM_H

#include "../object.h"

namespace n_isalnum {
	class Cisalnum :public Object
	{
	public:
		Cisalnum();
		~Cisalnum();
		int my_init(void *p=nullptr);
	};
}

using namespace n_isalnum;

#endif
