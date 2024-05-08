#ifndef SGDT_H
#define SGDT_H

#include "../object.h"

namespace n_SGDT {
	class CSGDT :public Object
	{
	public:
		CSGDT();
		~CSGDT();
		int my_init(void *p=nullptr);
	};
}

using namespace n_SGDT;

#endif
