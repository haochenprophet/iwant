#ifndef CODE_CHECK_H
#define CODE_CHECK_H

#include "object/object.h"

namespace n_code_check {
	class Ccode_check :public Object
	{
	public:
		Ccode_check();
		~Ccode_check();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_check); }
	};
}

using namespace n_code_check;

#endif
