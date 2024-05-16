#ifndef DO_H
#define DO_H

#include "object/object.h"

namespace n_do {
	class Cdo :public Object
	{
	public:
		Cdo();
		int my_init(void *p=nullptr);
	};
}

using namespace n_do;

#endif
