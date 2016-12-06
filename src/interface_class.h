#ifndef INTERFACE_CLASS_H
#define INTERFACE_CLASS_H

#include "object.h"

namespace n_interface_class {
	class Cinterface_class :public Object
	{
	public:
		Cinterface_class();
		int my_init(void *p=NULL);
	};
}

using namespace n_interface_class;

#endif
