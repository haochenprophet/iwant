#ifndef CODE_IMPORT_H
#define CODE_IMPORT_H

#include "object/object.h"

namespace n_code_import {
	class Ccode_import :public Object
	{
	public:
		Ccode_import();
		~Ccode_import();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Ccode_import); }
	};
}

using namespace n_code_import;

#endif
