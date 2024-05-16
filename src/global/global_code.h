#ifndef GLOBAL_CODE_H
#define GLOBAL_CODE_H

#include "object/object.h"

namespace n_global_code {
	class Cglobal_code :public Object
	{
	public:
		Cglobal_code();
		~Cglobal_code();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Cglobal_code); }
	};
}

using namespace n_global_code;

#endif
