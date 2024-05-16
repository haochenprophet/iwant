#ifndef DLLIMPORT_H
#define DLLIMPORT_H

#include "object/object.h"

namespace n_dllimport {
	class Cdllimport :public Object
	{
	public:
		Cdllimport();
		int my_init(void *p=nullptr);
	};
}

using namespace n_dllimport;

#endif
