#ifndef _IMPORT_H
#define _IMPORT_H

#include "object/object.h"

namespace n__import {
	class C_import :public Object
	{
	public:
		C_import();
		int my_init(void *p=nullptr);
	};
}

using namespace n__import;

#endif
