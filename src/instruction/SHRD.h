#ifndef SHRD_H
#define SHRD_H

#include "object/object.h"

namespace n_SHRD {
	class CSHRD :public Object
	{
	public:
		CSHRD();
		~CSHRD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHRD;

#endif
