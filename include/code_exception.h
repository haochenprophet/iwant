#ifndef CODE_EXCEPTION_H
#define CODE_EXCEPTION_H

#include "../object.h"

namespace n_code_exception {
	class Ccode_exception :public Object
	{
	public:
		Ccode_exception();
		~Ccode_exception();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_exception); }
	};
}

using namespace n_code_exception;

#endif
