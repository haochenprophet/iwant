#ifndef CODE_ERROR_H
#define CODE_ERROR_H

#include "../object.h"

namespace n_code_error {
	class Ccode_error :public Object
	{
	public:
		Ccode_error();
		~Ccode_error();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_error); }
	};
}

using namespace n_code_error;

#endif
