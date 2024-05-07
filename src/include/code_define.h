#ifndef CODE_DEFINE_H
#define CODE_DEFINE_H

#include "../object.h"

namespace n_code_define {
	class Ccode_define :public Object
	{
	public:
		Ccode_define();
		~Ccode_define();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_define); }
	};
}

using namespace n_code_define;

#endif
