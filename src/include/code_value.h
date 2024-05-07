#ifndef CODE_VALUE_H
#define CODE_VALUE_H

#include "../object.h"

namespace n_code_value {
	class Ccode_value :public Object
	{
	public:
		Ccode_value();
		~Ccode_value();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_value); }
	};
}

using namespace n_code_value;

#endif
