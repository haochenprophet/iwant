#ifndef SIGNED_H
#define SIGNED_H

#include "object.h"

namespace n_signed {
	class Csigned :public Object
	{
	public:
		Csigned();
		int my_init(void *p=NULL);
	};
}

using namespace n_signed;

#endif
