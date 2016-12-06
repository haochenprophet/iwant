#ifndef NOVTABLE_H
#define NOVTABLE_H

#include "object.h"

namespace n_novtable {
	class Cnovtable :public Object
	{
	public:
		Cnovtable();
		int my_init(void *p=NULL);
	};
}

using namespace n_novtable;

#endif
