#ifndef __ASM_H
#define __ASM_H

#include "../object.h"

namespace n___asm {
	class C__asm :public Object
	{
	public:
		C__asm();
		int my_init(void *p=nullptr);
	};
}

using namespace n___asm;

#endif
