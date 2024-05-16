#ifndef SECURITY_SOCIETAL_H
#define SECURITY_SOCIETAL_H

#include "object/object.h"

namespace n_security_societal {
	class Csecurity_societal :public Object
	{
	public:
		Csecurity_societal();
		~Csecurity_societal();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_societal); }
	};
}

using namespace n_security_societal;

#endif
