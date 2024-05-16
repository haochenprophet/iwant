#ifndef INSTANCEOF_H
#define INSTANCEOF_H

#include "object/object.h"

namespace n_instanceof {
	class Cinstanceof :public Object
	{
	public:
		Cinstanceof();
		int my_init(void *p=nullptr);
	};
}

using namespace n_instanceof;

#endif
