#ifndef LGDT_H
#define LGDT_H

#include "object.h"

namespace n_LGDT {
	class CLGDT :public Object
	{
	public:
		CLGDT();
		~CLGDT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_LGDT;

#endif
