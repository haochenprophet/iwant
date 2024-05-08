#ifndef CODE_FUNCTION_H
#define CODE_FUNCTION_H

#include "../object.h"

namespace n_code_function {
	class Ccode_function :public Object
	{
	public:
		Ccode_function();
		~Ccode_function();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_function); }
	};
}

using namespace n_code_function;

#endif
