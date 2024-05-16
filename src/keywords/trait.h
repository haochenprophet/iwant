#ifndef TRAIT_H
#define TRAIT_H

#include "object/object.h"

namespace n_trait {
	class Ctrait :public Object
	{
	public:
		Ctrait();
		int my_init(void *p=nullptr);
	};
}

using namespace n_trait;

#endif
