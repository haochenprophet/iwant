#ifndef SIGNED_H
#define SIGNED_H

#include "object/object.h"

namespace n_signed {
	class Csigned :public Object
	{
	public:
		Csigned();
		int my_init(void *p=nullptr);
	};
}

using namespace n_signed;

#endif
