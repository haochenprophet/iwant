#ifndef SECURITY_PROGRAM_H
#define SECURITY_PROGRAM_H

#include "../object.h"

namespace n_security_program {
	class Csecurity_program :public Object
	{
	public:
		Csecurity_program();
		~Csecurity_program();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_program); }
	};
}

using namespace n_security_program;

#endif
