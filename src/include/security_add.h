#ifndef SECURITY_ADD_H
#define SECURITY_ADD_H

#include "../object.h"

namespace n_security_add {
	class Csecurity_add :public Object
	{
	public:
		Csecurity_add();
		~Csecurity_add();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_add); }
	};
}

using namespace n_security_add;

#endif
