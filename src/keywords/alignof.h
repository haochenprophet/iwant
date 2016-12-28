#ifndef ALIGNOF_H
#define ALIGNOF_H

#include "object.h"

namespace n_alignof {
	class Calignof :public Object
	{
	public:
		Calignof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_alignof;

#endif
