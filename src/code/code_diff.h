#ifndef CODE_DIFF_H
#define CODE_DIFF_H

#include "object/object.h"

namespace n_code_diff {
	class Ccode_diff :public Object
	{
	public:
		Ccode_diff();
		~Ccode_diff();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_diff); }
	};
}

using namespace n_code_diff;

#endif
