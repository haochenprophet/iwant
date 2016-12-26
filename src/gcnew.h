#ifndef GCNEW_H
#define GCNEW_H

#include "object.h"

namespace n_gcnew {
	class Cgcnew :public Object
	{
	public:
		Cgcnew();
		int my_init(void *p=nullptr);
	};
}

using namespace n_gcnew;

#endif
