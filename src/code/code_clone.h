#ifndef CODE_CLONE_H
#define CODE_CLONE_H

#include "../object.h"

namespace n_code_clone {
	class Ccode_clone :public Object
	{
	public:
		Ccode_clone();
		~Ccode_clone();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_clone); }
	};
}

using namespace n_code_clone;

#endif
