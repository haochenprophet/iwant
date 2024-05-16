#ifndef CODE_STRUCT_H
#define CODE_STRUCT_H

#include "object/object.h"

namespace n_code_struct {
	class Ccode_struct :public Object
	{
	public:
		Ccode_struct();
		~Ccode_struct();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_struct); }
	};
}

using namespace n_code_struct;

#endif
