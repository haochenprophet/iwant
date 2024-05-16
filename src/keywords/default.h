#ifndef DEFAULT_H
#define DEFAULT_H

#include "object/object.h"

namespace n_default {
	class Cdefault :public Object
	{
	public:
		Cdefault();
		int my_init(void *p=nullptr);
	};
}

using namespace n_default;

#endif
