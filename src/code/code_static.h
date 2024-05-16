#ifndef CODE_STATIC_H
#define CODE_STATIC_H

#include "object/object.h"

namespace n_code_static {
	class Ccode_static :public Object
	{
	public:
		Ccode_static();
		~Ccode_static();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_static); }
	};
}

using namespace n_code_static;

#endif
