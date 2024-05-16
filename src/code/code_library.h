#ifndef CODE_LIBRARY_H
#define CODE_LIBRARY_H

#include "object/object.h"

namespace n_code_library {
	class Ccode_library :public Object
	{
	public:
		Ccode_library();
		~Ccode_library();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_library); }
	};
}

using namespace n_code_library;

#endif
