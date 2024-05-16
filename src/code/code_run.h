#ifndef CODE_RUN_H
#define CODE_RUN_H

#include "object/object.h"

namespace n_code_run {
	class Ccode_run :public Object
	{
	public:
		Ccode_run();
		~Ccode_run();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_run); }
	};
}

using namespace n_code_run;

#endif
