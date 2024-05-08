#ifndef LSL_H
#define LSL_H

#include "../object.h"

namespace n_LSL {
	class CLSL :public Object
	{
	public:
		CLSL();
		~CLSL();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LSL;

#endif
