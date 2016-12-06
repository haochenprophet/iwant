#ifndef TRAIT_H
#define TRAIT_H

#include "object.h"

namespace n_trait {
	class Ctrait :public Object
	{
	public:
		Ctrait();
		int my_init(void *p=NULL);
	};
}

using namespace n_trait;

#endif
