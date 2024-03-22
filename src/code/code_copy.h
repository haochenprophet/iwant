#ifndef CODE_COPY_H
#define CODE_COPY_H

#include "../object.h"

namespace n_code_copy {
	class Ccode_copy :public Object
	{
	public:
		Ccode_copy();
		~Ccode_copy();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_copy); }
	};
}

using namespace n_code_copy;

#endif
