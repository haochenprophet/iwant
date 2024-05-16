#ifndef SECURITY_SOFTWARE_H
#define SECURITY_SOFTWARE_H

#include "object/object.h"

namespace n_security_software {
	class Csecurity_software :public Object
	{
	public:
		Csecurity_software();
		~Csecurity_software();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_software); }
	};
}

using namespace n_security_software;

#endif
