#ifndef SECURITY_STRUCTURE_H
#define SECURITY_STRUCTURE_H

#include "object/object.h"

namespace n_security_structure {
	class Csecurity_structure :public Object
	{
	public:
		Csecurity_structure();
		~Csecurity_structure();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_structure); }
	};
}

using namespace n_security_structure;

#endif
