#ifndef TYPEID_H
#define TYPEID_H

#include "../object.h"

namespace n_typeid {
	class Ctypeid :public Object
	{
	public:
		Ctypeid();
		int my_init(void *p=nullptr);
	};
}

using namespace n_typeid;

#endif
