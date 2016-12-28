#ifndef UUID_H
#define UUID_H

#include "object.h"

namespace n_uuid {
	class Cuuid :public Object
	{
	public:
		Cuuid();
		int my_init(void *p=nullptr);
	};
}

using namespace n_uuid;

#endif
