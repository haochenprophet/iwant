#ifndef CODE_MAIN_H
#define CODE_MAIN_H

#include "object/object.h"

namespace n_code_main {
	class Ccode_main :public Object
	{
	public:
		Ccode_main();
		~Ccode_main();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_main); }
	};
}

using namespace n_code_main;

#endif
