#ifndef CATCH_H
#define CATCH_H

#include "object.h"

namespace n_catch {
	class Ccatch :public Object
	{
	public:
		Ccatch();
		int my_init(void *p=nullptr);
	};
}

using namespace n_catch;

#endif
