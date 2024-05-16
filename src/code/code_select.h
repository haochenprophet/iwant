#ifndef CODE_SELECT_H
#define CODE_SELECT_H

#include "object/object.h"

namespace n_code_select {
	class Ccode_select :public Object
	{
	public:
		Ccode_select();
		~Ccode_select();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_select); }
	};
}

using namespace n_code_select;

#endif
