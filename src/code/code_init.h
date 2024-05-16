#ifndef CODE_INIT_H
#define CODE_INIT_H

#include "object/object.h"

namespace n_code_init {
	class Ccode_init :public Object
	{
	public:
		Ccode_init();
		~Ccode_init();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_init); }
	};
}

using namespace n_code_init;

#endif
