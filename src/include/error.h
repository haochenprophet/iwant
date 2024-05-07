#ifndef ERROR_H
#define ERROR_H

#include "object.h"

namespace n_error {
	class Cerror :public Object
	{
	public:
		Cerror();
		~Cerror();
		int my_init(void *p=nullptr);
	};
}

using namespace n_error;

#endif
