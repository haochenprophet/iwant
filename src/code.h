#ifndef CODE_H
#define CODE_H

#include "object.h"

namespace n_code {
	class Ccode :public Object
	{
	public:
		Ccode();
		~Ccode();
		int my_init(void *p=nullptr);
	};
}

using namespace n_code;

#endif
