#ifndef SECURITY_HYPOXIA_H
#define SECURITY_HYPOXIA_H

#include "../object.h"

namespace n_security_hypoxia {
	class Csecurity_hypoxia :public Object
	{
	public:
		Csecurity_hypoxia();
		~Csecurity_hypoxia();
		int my_init(void *p=nullptr);
		size_t my_size() {return sizeof(Csecurity_hypoxia); }
	};
}

using namespace n_security_hypoxia;

#endif
