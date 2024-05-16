#ifndef CODE_PATCH_H
#define CODE_PATCH_H

#include "object/object.h"

namespace n_code_patch {
	class Ccode_patch :public Object
	{
	public:
		Ccode_patch();
		~Ccode_patch();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_patch); }
	};
}

using namespace n_code_patch;

#endif
