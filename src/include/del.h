#ifndef DEL_H
#define DEL_H

#include "../object.h"

namespace n_del {
	class Cdel :public Object
	{
	public:
		Cdel();
		int my_init(void *p=nullptr);
	};
}

using namespace n_del;

#endif
