#ifndef SECURITY_NAME_H
#define SECURITY_NAME_H

#include "../object.h"

namespace n_security_name {
	class Csecurity_name :public Object
	{
	public:
		Csecurity_name();
		~Csecurity_name();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_name); }
	};
}

using namespace n_security_name;

#endif
