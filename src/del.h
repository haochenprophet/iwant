#ifndef DEL_H
#define DEL_H

#include "object.h"

namespace n_del {
	class Cdel :public Object
	{
	public:
		Cdel();
		int my_init(void *p=NULL);
	};
}

using namespace n_del;

#endif
