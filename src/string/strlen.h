#ifndef STRLEN_H
#define STRLEN_H

#include "object/object.h"

namespace n_strlen {
	class Cstrlen :public Object
	{
	public:
		Cstrlen();
		~Cstrlen();
		int my_init(void *p=nullptr);
	};
}

using namespace n_strlen;

#endif
