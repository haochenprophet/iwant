#ifndef __HALT_COMPILER_H
#define __HALT_COMPILER_H

#include "object/object.h"

namespace n___halt_compiler {
	class C__halt_compiler :public Object
	{
	public:
		C__halt_compiler();
		int my_init(void *p=nullptr);
	};
}

using namespace n___halt_compiler;

#endif
