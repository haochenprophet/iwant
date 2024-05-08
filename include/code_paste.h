#ifndef CODE_PASTE_H
#define CODE_PASTE_H

#include "../object.h"

namespace n_code_paste {
	class Ccode_paste :public Object
	{
	public:
		Ccode_paste();
		~Ccode_paste();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_paste); }
	};
}

using namespace n_code_paste;

#endif
