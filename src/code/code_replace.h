#ifndef CODE_REPLACE_H
#define CODE_REPLACE_H

#include "object/object.h"

namespace n_code_replace {
	class Ccode_replace :public Object
	{
	public:
		Ccode_replace();
		~Ccode_replace();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_replace); }
	};
}

using namespace n_code_replace;

#endif
