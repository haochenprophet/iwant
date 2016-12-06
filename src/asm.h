#ifndef ASM_H
#define ASM_H

#include "object.h"

namespace n_asm {
	class Casm :public Object
	{
	public:
		Casm();
		int my_init(void *p=NULL);
	};
}

using namespace n_asm;

#endif
