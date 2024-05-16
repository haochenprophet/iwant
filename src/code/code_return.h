#ifndef CODE_RETURN_H
#define CODE_RETURN_H

#include "object/object.h"

namespace n_code_return {
	class Ccode_return :public Object
	{
	public:
		Ccode_return();
		~Ccode_return();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_return); }
	};
}

using namespace n_code_return;

#endif
