#ifndef CLFLUSH_H
#define CLFLUSH_H

#include "../object.h"

namespace n_CLFLUSH {
	class CCLFLUSH :public Object
	{
	public:
		CCLFLUSH();
		~CCLFLUSH();
		int my_init(void *p=nullptr);
	};
}

using namespace n_CLFLUSH;

#endif
