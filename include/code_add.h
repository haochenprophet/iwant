#ifndef CODE_ADD_H
#define CODE_ADD_H

#include "../object.h"

namespace n_code_add {
	class Ccode_add :public Object
	{
	public:
		Ccode_add();
		~Ccode_add();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_add); }
	};
}

using namespace n_code_add;

#endif
