#ifndef CODE_FIND_H
#define CODE_FIND_H

#include "object/object.h"

namespace n_code_find {
	class Ccode_find :public Object
	{
	public:
		Ccode_find();
		~Ccode_find();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_find); }
	};
}

using namespace n_code_find;

#endif
