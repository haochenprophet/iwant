#ifndef FILD_H
#define FILD_H

#include "object.h"

namespace n_FILD {
	class CFILD :public Object
	{
	public:
		CFILD();
		~CFILD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_FILD;

#endif
