#ifndef CODE_CUT_H
#define CODE_CUT_H

#include "../object.h"

namespace n_code_cut {
	class Ccode_cut :public Object
	{
	public:
		Ccode_cut();
		~Ccode_cut();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_cut); }
	};
}

using namespace n_code_cut;

#endif
