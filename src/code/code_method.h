#ifndef CODE_METHOD_H
#define CODE_METHOD_H

#include "object/object.h"

namespace n_code_method {
	class Ccode_method :public Object
	{
	public:
		Ccode_method();
		~Ccode_method();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_method); }
	};
}

using namespace n_code_method;

#endif
