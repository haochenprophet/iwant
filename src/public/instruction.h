#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "object/object.h"

namespace n_instruction {
	class Cinstruction :public Object
	{
	public:
		Cinstruction();
		~Cinstruction();
		int my_init(void *p=nullptr);
	};
}

using namespace n_instruction;

#endif
