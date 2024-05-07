#ifndef CODE_CREATE_H
#define CODE_CREATE_H

#include "../object.h"

namespace n_code_create {
	class Ccode_create :public Object
	{
	public:
		Ccode_create();
		~Ccode_create();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_create); }
	};
}

using namespace n_code_create;

#endif
