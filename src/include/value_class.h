#ifndef VALUE_CLASS_H
#define VALUE_CLASS_H

#include "../object.h"

namespace n_value_class {
	class Cvalue_class :public Object
	{
	public:
		Cvalue_class();
		int my_init(void *p=nullptr);
	};
}

using namespace n_value_class;

#endif
