#ifndef DECLARE_H
#define DECLARE_H

#include "object/object.h"

namespace n_declare {
	class Cdeclare :public Object
	{
	public:
		Cdeclare();
		int my_init(void *p=nullptr);
	};
}

using namespace n_declare;

#endif
