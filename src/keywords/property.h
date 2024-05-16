#ifndef PROPERTY_H
#define PROPERTY_H

#include "object/object.h"

namespace n_property {
	class Cproperty :public Object
	{
	public:
		Cproperty();
		int my_init(void *p=nullptr);
	};
}

using namespace n_property;

#endif
