#ifndef SECURITY_VIRUS_H
#define SECURITY_VIRUS_H

#include "object/object.h"

namespace n_security_virus {
	class Csecurity_virus :public Object
	{
	public:
		Csecurity_virus();
		~Csecurity_virus();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_virus); }
	};
}

using namespace n_security_virus;

#endif
