#ifndef PACKAGE_H
#define PACKAGE_H

#include "object.h"

namespace n_package {
	class Cpackage :public Object
	{
	public:
		Cpackage();
		int my_init(void *p=NULL);
	};
}

using namespace n_package;

#endif
