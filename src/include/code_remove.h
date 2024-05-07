#ifndef CODE_REMOVE_H
#define CODE_REMOVE_H

#include "../object.h"

namespace n_code_remove {
	class Ccode_remove :public Object
	{
	public:
		Ccode_remove();
		~Ccode_remove();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_remove); }
	};
}

using namespace n_code_remove;

#endif
