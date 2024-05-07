#ifndef VALUE_STRUCT_H
#define VALUE_STRUCT_H

#include "../object.h"

namespace n_value_struct {
	class Cvalue_struct :public Object
	{
	public:
		Cvalue_struct();
		int my_init(void *p=nullptr);
	};
}

using namespace n_value_struct;

#endif
