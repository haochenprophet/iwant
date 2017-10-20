#ifndef F2XM1_H
#define F2XM1_H

#include "object.h"

namespace n_F2XM1 {
	class CF2XM1 :public Object
	{
	public:
		CF2XM1();
		~CF2XM1();
		int my_init(void *p=nullptr);
	};
}

using namespace n_F2XM1;

#endif
