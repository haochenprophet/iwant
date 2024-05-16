#ifndef CODE_OPERATOR_H
#define CODE_OPERATOR_H

#include "object/object.h"

namespace n_code_operator {
	class Ccode_operator :public Object
	{
	public:
		Ccode_operator();
		~Ccode_operator();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_operator); }
	};
}

using namespace n_code_operator;

#endif
