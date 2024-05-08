#ifndef CODE_MERGE_H
#define CODE_MERGE_H

#include "../object.h"

namespace n_code_merge {
	class Ccode_merge :public Object
	{
	public:
		Ccode_merge();
		~Ccode_merge();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_merge); }
	};
}

using namespace n_code_merge;

#endif
