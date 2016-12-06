#ifndef PROPERTY_H
#define PROPERTY_H

#include "object.h"

namespace n_property {
	class Cproperty :public Object
	{
	public:
		Cproperty();
		int my_init(void *p=NULL);
	};
}

using namespace n_property;

#endif
