#ifndef CODE_INSERT_H
#define CODE_INSERT_H

#include "object/object.h"

namespace n_code_insert {
	class Ccode_insert :public Object
	{
	public:
		Ccode_insert();
		~Ccode_insert();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_insert); }
	};
}

using namespace n_code_insert;

#endif
