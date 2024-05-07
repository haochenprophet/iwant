#ifndef SECURITY_CREATE_H
#define SECURITY_CREATE_H

#include "../object.h"

namespace n_security_create {
	class Csecurity_create :public Object
	{
	public:
		Csecurity_create();
		~Csecurity_create();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_create); }
	};
}

using namespace n_security_create;

#endif
