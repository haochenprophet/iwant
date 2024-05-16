#ifndef NOVTABLE_H
#define NOVTABLE_H

#include "object/object.h"

namespace n_novtable {
	class Cnovtable :public Object
	{
	public:
		Cnovtable();
		int my_init(void *p=nullptr);
	};
}

using namespace n_novtable;

#endif
