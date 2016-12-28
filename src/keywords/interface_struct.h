#ifndef INTERFACE_STRUCT_H
#define INTERFACE_STRUCT_H

#include "object.h"

namespace n_interface_struct {
	class Cinterface_struct :public Object
	{
	public:
		Cinterface_struct();
		int my_init(void *p=nullptr);
	};
}

using namespace n_interface_struct;

#endif
