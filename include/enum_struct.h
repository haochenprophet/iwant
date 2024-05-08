#ifndef ENUM_STRUCT_H
#define ENUM_STRUCT_H

#include "../object.h"

namespace n_enum_struct {
	class Cenum_struct :public Object
	{
	public:
		Cenum_struct();
		int my_init(void *p=nullptr);
	};
}

using namespace n_enum_struct;

#endif
