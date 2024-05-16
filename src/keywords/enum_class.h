#ifndef ENUM_CLASS_H
#define ENUM_CLASS_H

#include "object/object.h"

namespace n_enum_class {
	class Cenum_class :public Object
	{
	public:
		Cenum_class();
		int my_init(void *p=nullptr);
	};
}

using namespace n_enum_class;

#endif
