#ifndef ADD_H
#define ADD_H

#include "../object.h"

namespace n_ADD {
	class CADD :public Object
	{
	public:
		CADD();
		~CADD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_ADD;

#endif
