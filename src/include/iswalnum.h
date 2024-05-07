#ifndef ISWALNUM_H
#define ISWALNUM_H

#include "../object.h"

namespace n_iswalnum {
	class Ciswalnum :public Object
	{
	public:
		Ciswalnum();
		~Ciswalnum();
		int my_init(void *p=nullptr);
	};
}

using namespace n_iswalnum;

#endif
