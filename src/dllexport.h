#ifndef DLLEXPORT_H
#define DLLEXPORT_H

#include "object.h"

namespace n_dllexport {
	class Cdllexport :public Object
	{
	public:
		Cdllexport();
		int my_init(void *p=NULL);
	};
}

using namespace n_dllexport;

#endif
