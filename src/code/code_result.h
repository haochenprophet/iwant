#ifndef CODE_RESULT_H
#define CODE_RESULT_H

#include "object/object.h"

namespace n_code_result {
	class Ccode_result :public Object
	{
	public:
		Ccode_result();
		~Ccode_result();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_result); }
	};
}

using namespace n_code_result;

#endif
