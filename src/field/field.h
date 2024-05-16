#ifndef FIELD_H
#define FIELD_H

#include "object/object.h"

namespace n_field {
	class Cfield :public Object
	{
	public:
		Cfield();
		~Cfield();
		int my_init(void *p=nullptr);
	};
}

using namespace n_field;

#endif
