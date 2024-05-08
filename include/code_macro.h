#ifndef CODE_MACRO_H
#define CODE_MACRO_H

#include "../object.h"

namespace n_code_macro {
	class Ccode_macro :public Object
	{
	public:
		Ccode_macro();
		~Ccode_macro();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_macro); }
	};
}

using namespace n_code_macro;

#endif
