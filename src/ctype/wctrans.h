#ifndef WCTRANS_H
#define WCTRANS_H

#include "object/object.h"

namespace n_wctrans {
	class Cwctrans :public Object
	{
	public:
		Cwctrans();
		~Cwctrans();
		int my_init(void *p=nullptr);
	};
}

using namespace n_wctrans;

#endif
