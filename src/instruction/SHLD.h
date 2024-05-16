#ifndef SHLD_H
#define SHLD_H

#include "object/object.h"

namespace n_SHLD {
	class CSHLD :public Object
	{
	public:
		CSHLD();
		~CSHLD();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SHLD;

#endif
