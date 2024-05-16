#ifndef LIST_H
#define LIST_H

#include "object/object.h"

namespace n_list {
	class Clist :public Object
	{
	public:
		Clist();
		int my_init(void *p=nullptr);
	};
}

using namespace n_list;

#endif
