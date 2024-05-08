#ifndef SOURCE_H
#define SOURCE_H

#include "object.h"

namespace n_source {
	class Csource :public Object
	{
	public:
		Csource();
		~Csource();
		int my_init(void *p=nullptr);
	};
}

using namespace n_source;

#endif
